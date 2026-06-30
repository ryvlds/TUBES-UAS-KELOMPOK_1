#include <iostream>
#include "../include/history.h"

using namespace std;

stack<RiwayatParkir> riwayatParkir;

void tambahRiwayat(
    string platNomor,
    string jenisKendaraan,
    string jamMasuk,
    string jamKeluar)
{
    RiwayatParkir data;

    cout << "\n===== TAMBAH RIWAYAT PARKIR =====\n";

    cout << "Plat Nomor       : ";
    cin >> data.platNomor;

    cout << "Jenis Kendaraan  : ";
    cin >> data.jenisKendaraan;

    cout << "Jam Masuk        : ";
    cin >> data.jamMasuk;

    cout << "Jam Keluar       : ";
    cin >> data.jamKeluar;

    riwayatParkir.push(data);
    cout << "\nRiwayat berhasil ditambahkan.\n";
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

        cout << "Plat Nomor      : " << data.platNomor << endl;
        cout << "Jenis Kendaraan : " << data.jenisKendaraan << endl;
        cout << "Jam Masuk       : " << data.jamMasuk << endl;
        cout << "Jam Keluar      : " << data.jamKeluar << endl;
        cout << "-----------------------------" << endl;
        temp.pop();
    }
}