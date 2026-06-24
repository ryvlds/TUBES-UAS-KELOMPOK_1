#include "../include/parking.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<Kendaraan> daftarParkir; 
// Kendaraan Masuk
void kendaraanMasuk() {
    Kendaraan k;

    cout << "\n=== KENDARAAN MASUK ===\n";

    cin.ignore();

    cout << "Nomor Polisi : ";
    getline(cin, k.noPolisi);

    cout << "Jenis Kendaraan : ";
    getline(cin, k.jenisKendaraan);

    cout << "Jam Masuk : ";
    getline(cin, k.jamMasuk);

    k.jamKeluar = "-";

    daftarParkir.push_back(k);

    cout << "\nKendaraan berhasil ditambahkan.\n";
}