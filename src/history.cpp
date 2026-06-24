#include "../include/history.h"

stack<RiwayatParkir> riwayatParkir;

void tambahRiwayat(string platNomor,
                   string jenisKendaraan,
                   string jamMasuk,
                   string jamKeluar)
{
    RiwayatParkir data;

    data.platNomor = platNomor;
    data.jenisKendaraan = jenisKendaraan;
    data.jamMasuk = jamMasuk;
    data.jamKeluar = jamKeluar;

    riwayatParkir.push(data);

}