# IoT-Based-Patient-Health-Monitoring-System

Anggota Kelompok 19:
1. Ryan Safa Tjendana - 2206826835
2. Drasseta Aliyyu Darmansyah - Student ID 2
3. Darren Adam Dewantoro - 22068616600
4. Kevin Ariono - Student ID 4

# Chapter 1: Introduction
## Problem Statement

&emsp;Pemantauan kondisi kesehatan pasien secara real-time merupakan kebutuhan yang semakin mendesak, terutama dalam situasi di mana pasien membutuhkan perhatian intensif atau perawatan jarak jauh. Sistem pemantauan tradisional yang bergantung pada pengawasan langsung tenaga medis sering kali kurang efisien, memakan banyak waktu, dan tidak memungkinkan pemantauan kontinu, terutama dalam kasus pasien yang berada di lokasi terpencil atau memiliki mobilitas terbatas. Hal ini dapat meningkatkan risiko keterlambatan dalam mendeteksi perubahan kondisi kesehatan yang berpotensi berbahaya.

&emsp;Selain itu, banyak perangkat pemantauan kesehatan modern bersifat mahal, sulit diakses, dan kurang terintegrasi dengan teknologi IoT yang memungkinkan pengawasan berbasis cloud. Hal ini menciptakan kesenjangan dalam memberikan solusi yang terjangkau, dapat diakses, dan efisien untuk memantau parameter kesehatan seperti detak jantung, saturasi oksigen, suhu tubuh, serta suhu dan kelembapan lingkungan pasien secara bersamaan.

&emsp;Oleh karena itu, diperlukan sebuah sistem pemantauan kesehatan berbasis IoT yang tidak hanya dapat memberikan data real-time tetapi juga mampu mengintegrasikan berbagai parameter kesehatan pasien ke dalam satu platform yang mudah digunakan, seperti aplikasi Blynk. Dengan solusi ini, diharapkan masalah keterbatasan akses, biaya tinggi, dan efisiensi pemantauan dapat diatasi secara efektif.


## Proposed Solution

&emsp;Untuk mengatasi tantangan pemantauan kesehatan pasien secara real-time, sistem pemantauan kesehatan berbasis IoT diusulkan sebagai solusi yang inovatif dan fleksibel. Sistem ini menggunakan modul ESP32 sebagai pusat pengendali untuk mengintegrasikan berbagai sensor, termasuk DHT11 untuk mengukur suhu dan kelembapan ruangan, DS18B20 untuk memantau suhu tubuh pasien, dan MAX30100 untuk mendeteksi detak jantung (BPM) serta tingkat saturasi oksigen (SpO2). Data dari sensor ini dikirimkan secara real-time ke platform IoT Blynk, memungkinkan pengguna untuk memantau kondisi kesehatan melalui aplikasi dengan antarmuka yang ramah pengguna.

&emsp;Salah satu fitur utama sistem ini adalah fleksibilitas dalam memilih parameter kesehatan yang ingin dipantau. Pengguna dapat menentukan apakah ingin memantau suhu atau kelembapan dari DHT11, serta detak jantung atau SpO2 dari MAX30100, sesuai kebutuhan spesifik pasien. Selain itu, sistem ini juga dilengkapi dengan mekanisme alert yang akan mengirimkan pemberitahuan melalui aplikasi Blynk jika suhu atau detak jantung melampaui batas yang telah ditentukan.

&emsp;Sistem ini tidak hanya menyediakan data real-time, tetapi juga mempermudah pemantauan lokal melalui output serial. Dengan kemampuan ini, sistem menawarkan solusi pemantauan kesehatan yang andal, fleksibel, dan mudah diimplementasikan, yang diharapkan dapat meningkatkan efisiensi pengawasan kesehatan pasien, baik di rumah sakit maupun di rumah.


## Acceptance Criteria

&emsp;Berikut adalah kriteria penerimaan untuk memastikan keberhasilan implementasi Sistem Pemantauan Kesehatan Pasien Berbasis IoT:

1. **Pengumpulan Data Sensor:**
    - Sistem dapat membaca data suhu dan kelembapan dari sensor DHT11 secara akurat.
    - Sistem dapat membaca data suhu tubuh dari sensor DS18B20 secara akurat.
    - Sistem dapat membaca data detak jantung (BPM) dan saturasi oksigen (SpO2) dari sensor MAX30100 secara akurat.

2. **Pemantauan Real-Time:**
    - Data dari semua sensor dapat ditampilkan secara real-time di aplikasi Blynk.
    - Pengguna dapat memilih tipe data yang ingin dipantau, seperti suhu atau kelembapan dari DHT11 dan detak jantung atau SpO2 dari MAX30100.

3. **Notifikasi dan Alert:**
    - Sistem dapat mengirimkan notifikasi atau alert melalui aplikasi Blynk jika suhu ruangan, suhu tubuh, atau detak jantung melebihi batas yang telah ditentukan.

4. **Integrasi Perangkat Keras dan Perangkat Lunak:**
    - ESP32 mampu mengintegrasikan data dari semua sensor tanpa gangguan.
    - Sistem dapat mengirimkan data ke platform Blynk melalui konektivitas WiFi dengan stabilitas tinggi.

5. **Kemudahan Monitoring:**
    - Data dari sensor dapat ditampilkan melalui output serial untuk pemantauan lokal.
    - Data pada aplikasi Blynk mudah dipahami dengan antarmuka yang ramah pengguna.

6. **Stabilitas Sistem:**
    - Sistem harus bekerja secara kontinu selama 24 jam tanpa kegagalan.
    - Sistem dapat pulih secara otomatis setelah terjadi pemutusan koneksi WiFi.

7. **Efisiensi Energi:**
    - Sistem mampu berjalan dengan konsumsi daya yang minimal untuk penggunaan jangka panjang.

8. **Fleksibilitas dan Skalabilitas:**
    - Sistem memungkinkan penyesuaian ambang batas suhu atau detak jantung sesuai kebutuhan pengguna.
    - Sistem dapat diperluas untuk menambahkan sensor atau fitur lain di masa depan tanpa mengganggu fungsionalitas dasar.

## Timeline and Milestones

<table style="border: 1px solid black; border-collapse: collapse;">
    <thead>
        <tr style="background-color: #3d85c6; color: #ffffff; border: 1px solid black;">
                <th colspan="2" style="text-align: center; border: 1px solid black;">Tasks</th>
                <th style="text-align: center; border: 1px solid black;">Hardware Design Completion</th>
                <th style="text-align: center; border: 1px solid black;">Software Development</th>
                <th style="text-align: center; border: 1px solid black;">Integration and Testing of Hardware and Software</th>
                <th style="text-align: center; border: 1px solid black;">Final Product Assembly and Testing</th>
        </tr>
    </thead>
    <tbody>
        <tr>
                <td rowspan="7" style="text-align: center; background-color: #c9daf8; color: #000000; border: 1px solid black;">Week 1</td>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">27</td>
                <td style="text-align: center; background-color: #f6b26b; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">28</td>
                <td style="text-align: center; background-color: #f6b26b; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">29</td>
                <td style="text-align: center; background-color: #f6b26b; color: #000000; border: 1px solid black;">x</td>
                <td style="text-align: center; background-color: #f9cb9c; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">30</td>
                <td style="text-align: center; background-color: #f6b26b; color: #000000; border: 1px solid black;">x</td>
                <td style="text-align: center; background-color: #f9cb9c; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">1</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #f9cb9c; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">2</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #f9cb9c; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">3</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fce5cd; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td rowspan="7" style="text-align: center; background-color: #c9daf8; color: #000000; border: 1px solid black;">Week 2</td>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">4</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fce5cd; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">5</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fce5cd; color: #000000; border: 1px solid black;">x</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">6</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fce5cd; color: #000000; border: 1px solid black;">x</td>
                <td style="text-align: center; background-color: #fbf2d0; color: #000000; border: 1px solid black;">x</td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">7</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fce5cd; color: #000000; border: 1px solid black;">x</td>
                <td style="text-align: center; background-color: #fbf2d0; color: #000000; border: 1px solid black;">x</td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">8</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fbf2d0; color: #000000; border: 1px solid black;">x</td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">9</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fbf2d0; color: #000000; border: 1px solid black;">x</td>
        </tr>
        <tr>
                <td style="text-align: center; background-color: #bdd7ee; color: #000000; border: 1px solid black;">10</td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="background-color: #ddebf7; border: 1px solid black;"></td>
                <td style="text-align: center; background-color: #fbf2d0; color: #000000; border: 1px solid black;">x</td>
        </tr>
    </tbody>
</table>
