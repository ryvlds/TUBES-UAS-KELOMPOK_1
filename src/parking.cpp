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
// Kendaraan Keluar
void kendaraanKeluar() {
    string plat;
    bool ditemukan = false;

    cout << "\n=== KENDARAAN KELUAR ===\n";

    cin.ignore();

    cout << "Masukkan Nomor Polisi : ";
    getline(cin, plat);

    for (int i = 0; i < daftarParkir.size(); i++) {

        if (daftarParkir[i].noPolisi == plat) {

            cout << "Jam Keluar : ";
            getline(cin, daftarParkir[i].jamKeluar);

            cout << "\nKendaraan keluar berhasil dicatat.\n";

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Kendaraan tidak ditemukan.\n";
    }
}
// Tampilkan Kendaraan
void tampilkanKendaraan() {

    cout << "\n=== DAFTAR KENDARAAN ===\n";

    if (daftarParkir.empty()) {
        cout << "Belum ada kendaraan.\n";
        return;
    }

    for (int i = 0; i < daftarParkir.size(); i++) {

        cout << "\nData Ke-" << i + 1 << endl;
        cout << "Nomor Polisi   : "
             << daftarParkir[i].noPolisi << endl;

        cout << "Jenis Kendaraan: "
             << daftarParkir[i].jenisKendaraan << endl;

        cout << "Jam Masuk      : "
             << daftarParkir[i].jamMasuk << endl;

        cout << "Jam Keluar     : "
             << daftarParkir[i].jamKeluar << endl;
    }
}