# Smart Parking System

## UAS Praktikum Algoritma dan Struktur Data

Program Studi Teknik Informatika  
Fakultas Teknik  
Universitas Perjuangan Tasikmalaya

---

## Kelompok 1

### Lead Developer

- **Rayival Dede Saputra** (2503010032)

### Anggota

- Ridzki Ahnovalrian Arifin (2503010031)
- Wahyu Hidayat (2503010030)
- M. Rasyad Mubarok (2503010025)
- Silfa Aida Fitriyah (2503010047)

---

# Deskripsi

Smart Parking System merupakan aplikasi parkir sederhana berbasis **C++ Console** yang dikembangkan sebagai proyek **UAS Praktikum Algoritma dan Struktur Data**.

Aplikasi ini bertujuan membantu proses pengelolaan kendaraan yang masuk dan keluar area parkir, menampilkan kendaraan yang sedang parkir, mengetahui slot parkir yang tersedia, serta menyimpan riwayat kendaraan.

Dalam pengembangannya, aplikasi menerapkan konsep struktur data yang telah dipelajari selama perkuliahan, yaitu:

- **Vector** untuk menyimpan data kendaraan yang sedang parkir.
- **Stack** untuk menyimpan riwayat kendaraan yang telah keluar.

---

# Fitur Aplikasi

- Kendaraan Masuk
- Kendaraan Keluar
- Tampilkan Kendaraan
- Lihat Slot Parkir
- Cari Slot Kosong
- Tampilkan Riwayat Parkir

---

# Struktur Data yang Digunakan

| Struktur Data | Kegunaan |
|---------------|----------|
| Vector | Menyimpan data kendaraan yang sedang parkir |
| Stack | Menyimpan riwayat kendaraan yang telah keluar |

---

# Struktur Project

```text
TUBES-UAS-KELOMPOK_1/
│
├── build/
│
├── data/
│   └── parking.csv
│
├── docs/
│   └── Flowchart-SmartParkingSystem.drawio.png
│
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

### Penjelasan Folder

| Folder | Fungsi |
|---------|--------|
| **src** | Berisi source code utama program. |
| **include** | Berisi file header (.h) yang digunakan setiap modul. |
| **docs** | Berisi dokumentasi proyek, seperti flowchart dan gambar pendukung. |
| **data** | Disiapkan sebagai tempat penyimpanan data aplikasi (CSV) untuk pengembangan selanjutnya. |
| **build** | Berisi hasil proses kompilasi program. |

---

# Persiapan

Sebelum menjalankan program, pastikan perangkat telah memiliki:

- Visual Studio Code (disarankan)
- Git
- MinGW-w64 (G++ 11 atau versi yang lebih baru)

Pastikan compiler telah terpasang dengan menjalankan perintah berikut:

```bash
g++ --version
```

Jika versi compiler berhasil ditampilkan, berarti MinGW telah terpasang dengan benar.

---

# Cara Menjalankan Program

## 1. Clone Repository

```bash
git clone https://github.com/ryvlds/TUBES-UAS-KELOMPOK_1.git
```

## 2. Masuk ke Folder Project

```bash
cd TUBES-UAS-KELOMPOK_1
```

## 3. Compile Program

```bash
g++ src/*.cpp -I include -o build/app
```

## 4. Menjalankan Program

### Windows

```bash
.\build\app.exe
```

### Linux / macOS

```bash
./build/app
```

---

# Alur Program

1. Pengguna memilih menu pada aplikasi.
2. Kendaraan yang masuk disimpan ke dalam **Vector**.
3. Kendaraan yang sedang parkir dapat ditampilkan melalui menu daftar kendaraan.
4. Sistem menghitung jumlah slot parkir yang tersedia berdasarkan jumlah kendaraan aktif.
5. Saat kendaraan keluar, data dipindahkan ke dalam **Stack** sebagai riwayat parkir.
6. Riwayat kendaraan dapat ditampilkan kembali melalui menu riwayat.

---

# Branch Development

```text
main
develop
feature-parking
feature-slot
feature-history
feature-testing
```

Pengembangan dilakukan menggunakan Git dan GitHub dengan sistem branching. Setiap anggota mengembangkan modul pada branch masing-masing, kemudian seluruh perubahan diintegrasikan ke branch **develop** sebelum akhirnya digabungkan ke branch **main**.

---

# Teknologi yang Digunakan

- C++
- Visual Studio Code
- MinGW-w64 (G++ 11)
- Git
- GitHub

---

# Pengembangan Selanjutnya

Saat ini data kendaraan dan riwayat parkir masih disimpan di memori menggunakan **Vector** dan **Stack**, sehingga seluruh data akan hilang ketika aplikasi ditutup.

Folder **data** telah disiapkan sebagai tempat penyimpanan data menggunakan file **CSV**. Pada pengembangan berikutnya, sistem direncanakan dapat menyimpan data kendaraan secara permanen sehingga informasi tetap tersedia ketika aplikasi dijalankan kembali.

Selain itu, beberapa pengembangan yang dapat dilakukan antara lain:

- Penyimpanan data menggunakan file CSV.
- Integrasi dengan database (SQLite atau MySQL).
- Penambahan sistem login pengguna.
- Pengembangan antarmuka berbasis GUI.

---

# Lisensi

Project ini dibuat untuk memenuhi tugas **UAS Praktikum Algoritma dan Struktur Data** Program Studi Teknik Informatika, Universitas Perjuangan Tasikmalaya.

Seluruh source code pada repository ini digunakan untuk keperluan pembelajaran dan pengembangan akademik.
