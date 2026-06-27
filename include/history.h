#ifndef HISTORY_H
#define HISTORY_H
#include <string>
#include <stack>

using namespace std;
//struct riwayat parkir
struct RiwayatParkir
{
    string platNomor;
    string jenisKendaraan;
    string jamMasuk;
    string jamKeluar;
};

extern stack<RiwayatParkir> riwayatParkir;
//tambah riwayat
void tambahRiwayat(string platNomor,
                   string jenisKendaraan,
                   string jamMasuk,
                   string jamKeluar);
                   
 void tampilRiwayat();                  

#endif