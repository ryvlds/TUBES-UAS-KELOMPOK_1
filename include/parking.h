#ifndef PARKING_H
#define PARKING_H

#include <iostream>
#include <vector>
using namespace std;

struct Kendaraan {
    string noPolisi;
    string jenisKendaraan;
    string jamMasuk;
    string jamKeluar;
};

extern vector<Kendaraan> daftarParkir;

// Fungsi
void kendaraanMasuk();
void kendaraanKeluar();
void tampilkanKendaraan();

#endif