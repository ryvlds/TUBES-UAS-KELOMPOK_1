# 🚗 SMART PARKING SYSTEM

## UAS Praktikum Algoritma dan Struktur Data

**Universitas Perjuangan Tasikmalaya**

---

## 👥 KELOMPOK 1

### 👑 LEAD DEVELOPER

* Rayival Dede Saputra (2503010032)

### 👨‍💻 ANGGOTA

* Ridzki Ahnovalrian Arifin (2503010031)
* Wahyu Hidayat (2503010030)
* M. Rasyad Mubarok (2503010025)
* Silfa Aida Fitriyah (2503010047)

---

## 📌 Deskripsi Project

Smart Parking System adalah aplikasi berbasis **C++ Console** yang dibuat untuk memenuhi tugas UAS Praktikum Algoritma dan Struktur Data.

Sistem ini digunakan untuk mengelola parkir kendaraan secara sederhana dengan menerapkan konsep **struktur data Vector dan Stack**.

* Vector digunakan untuk menyimpan data kendaraan yang sedang parkir.
* Stack digunakan untuk menyimpan riwayat kendaraan yang telah keluar.

---

## ⚙️ Fitur Aplikasi

* 🚗 Kendaraan Masuk
* 🚪 Kendaraan Keluar (otomatis masuk ke riwayat)
* 📋 Tampilkan Kendaraan
* 🅿️ Lihat Slot Parkir
* 🔍 Cari Slot Kosong
* 📜 Tampilkan Riwayat Parkir

---

## 🧠 Struktur Data yang Digunakan

* **Vector**

  * Menyimpan daftar kendaraan aktif (sedang parkir)

* **Stack**

  * Menyimpan riwayat kendaraan yang sudah keluar

---

## 📁 Struktur Project

```text id="projstr"
TUBES-UAS-KELOMPOK_1/
│
├── build/
├── data/
├── docs/
├── include/
│   ├── history.h
│   ├── parking.h
│   └── slot.h
│
├── src/
│   ├── main.cpp
│   ├── parking.cpp
│   ├── slot.cpp
│   └── history.cpp
│
├── README.md
└── .gitignore
```

---

## ▶️ Cara Menjalankan Program

### Clone Repository

```bash id="clone1"
git clone https://github.com/ryvlds/TUBES-UAS-KELOMPOK_1.git
```

### Masuk Folder Project

```bash id="cd1"
cd TUBES-UAS-KELOMPOK_1
```

### Compile Program

```bash id="compile1"
g++ src/*.cpp -I include -o build/app
```

### Jalankan Program

**Windows**

```bash id="run1"
.\build\app.exe
```

**Linux / MacOS**

```bash id="run2"
./build/app
```

---

## 🔄 Alur Sistem

1. Kendaraan masuk → disimpan ke vector parkir
2. Kendaraan keluar → dipindahkan ke stack riwayat
3. Data kendaraan aktif dapat ditampilkan
4. Slot parkir dihitung berdasarkan kapasitas
5. Slot kosong dapat dicari
6. Riwayat kendaraan dapat dilihat

---

## 🌿 Branch Development

```text id="branch1"
main
develop
feature-parking
feature-slot
feature-history
feature-testing
```

---

## 🧾 Teknologi yang Digunakan

* C++
* Visual Studio Code
* Git & GitHub

---

## 📌 Catatan

Project ini dibuat untuk kebutuhan akademik sebagai **UAS Praktikum Algoritma dan Struktur Data**, dengan fokus penerapan konsep:

* Array / Vector
* Stack
* Modular programming
* Git workflow kolaborasi tim
