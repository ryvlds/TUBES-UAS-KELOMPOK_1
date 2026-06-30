#include <iostream>
#include "../include/history.h"

using namespace std;

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

void tampilRiwayat()
{
    if (riwayatParkir.empty())
    {
        cout << "Belum ada riwayat parkir." << endl;
        return;
    }

    cout << "\n===== RIWAYAT PARKIR =====" << endl;

    stack<RiwayatParkir> temp = riwayatParkir;

    while (!temp.empty())
    {
        RiwayatParkir data = temp.top();

        cout << data.platNomor << " | "
             << data.jenisKendaraan << " | "
             << data.jamMasuk << " | "
             << data.jamKeluar << endl;

        temp.pop();
    }
}