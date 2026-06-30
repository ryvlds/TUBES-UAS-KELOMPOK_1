#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include <stack>

using namespace std;

struct RiwayatParkir
{
    string platNomor;
    string jenisKendaraan;
    string jamMasuk;
    string jamKeluar;
};

extern stack<RiwayatParkir> riwayatParkir;
//tambah riwayat parkir
void tambahRiwayat(
    string platNomor,
    string jenisKendaraan,
    string jamMasuk,
    string jamKeluar
);
//tampilkan riwayat parkir
void tampilRiwayat();

#endif