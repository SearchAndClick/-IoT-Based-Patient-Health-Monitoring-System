#include <DHT.h>
#include <OneWire.h>
#include <DallasTemperature.h>
#include <WiFi.h>

// Blynk Credentials
#define BLYNK_TEMPLATE_ID "TMPL6n86zxBll"
#define BLYNK_TEMPLATE_NAME "Proyek Akhir"
#define BLYNK_AUTH_TOKEN "2whbOcCAyDZ7ZyHsmjXalL9lcGamiZwg"
#include <BlynkSimpleEsp32.h>


// Wi-Fi Credentials
const char* ssid = "GJ";
const char* password = "sumbawa8";

// Konfigurasi DHT11
#define DHTPIN 2        
#define DHTTYPE DHT11   
#define LED_PIN 15

// Inisialisasi DHT11 & DS18B20
DHT dht(DHTPIN, DHTTYPE);
#define ONE_WIRE_BUS 4
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

// Variabel global
float temperatureThreshold = 20.0;
float dhtTemperature, dhtHumidity, temperatureC;

// Callback untuk Blynk slider
BLYNK_WRITE(V4) {
  temperatureThreshold = param.asFloat();  
  Serial.print("Threshold suhu diperbarui: ");
  Serial.println(temperatureThreshold);
}

// Task untuk mengelola Blynk
void TaskBlynk(void *pvParameters) {
  while (true) {
    Blynk.run();
    vTaskDelay(10 / portTICK_PERIOD_MS);  // Task delay agar tidak memblokir
  }
}

// Task untuk membaca sensor dan mengontrol LED
void TaskSensor(void *pvParameters) {
  while (true) {
    // Baca suhu dan kelembapan DHT11
    dhtTemperature = dht.readTemperature();
    dhtHumidity = dht.readHumidity();

    if (!isnan(dhtTemperature) && !isnan(dhtHumidity)) {
      Serial.printf("Suhu DHT11(Task): %.2f °C\n", dhtTemperature);
      Serial.printf("Kelembaban DHT11: %.2f %%\n", dhtHumidity);

      Blynk.virtualWrite(V1, dhtTemperature);  
      Blynk.virtualWrite(V2, dhtHumidity);     
    } else {
      Serial.println("Sensor DHT11 gagal dibaca!");
    }

    // Baca suhu DS18B20
    sensors.requestTemperatures();  
    temperatureC = sensors.getTempCByIndex(0);

    if (temperatureC != DEVICE_DISCONNECTED_C) {
      Serial.printf("Suhu DS18B20: %.2f °C\n", temperatureC);
      Blynk.virtualWrite(V3, temperatureC);

      if (temperatureC > temperatureThreshold) {
        digitalWrite(LED_PIN, HIGH);  
        Serial.println("LED NYALA (Suhu tinggi)!");
      } else {
        digitalWrite(LED_PIN, LOW);   
        Serial.println("LED MATI (Suhu normal)!");
      }
    }

    vTaskDelay(2000 / portTICK_PERIOD_MS);  // Delay baca setiap 2 detik
  }
}

void setup() {
  Serial.begin(115200);
  delay(2000);

  dht.begin();
  sensors.begin();
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  WiFi.begin(ssid, password);
  Serial.println("Menghubungkan ke Wi-Fi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("\nTerhubung ke Wi-Fi!");
  Serial.print("Alamat IP: ");
  Serial.println(WiFi.localIP());

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, password);

  // Membuat task FreeRTOS
  xTaskCreatePinnedToCore(TaskBlynk, "Blynk Task", 4096, NULL, 1, NULL, 1);
  xTaskCreatePinnedToCore(TaskSensor, "Sensor Task", 4096, NULL, 1, NULL, 1);
}

void loop() {
  // Kosong karena FreeRTOS yang mengelola task
}
