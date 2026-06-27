#include <iostream>
#include "history.h"

using namespace std;

int main()
{
    int pilih;

    do
    {
        cout << "=========================\n";
        cout << " SMART PARKING SYSTEM\n";
        cout << "=========================\n";
        cout << "1. Kendaraan Masuk\n";
        cout << "2. Kendaraan Keluar\n";
        cout << "3. Tampil Kendaraan\n";
        cout << "4. Lihat Slot Parkir\n";
        cout << "5. Cari Slot Kosong\n";
        cout << "6. Tambah Riwayat Parkir\n";
        cout << "7. Tampil Riwayat Parkir\n";
        cout << "0. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;

        switch (pilih)
        {
        case 6:
            tambahRiwayat("Z1234AB", "Motor", "08:00", "10:00");
            cout << "Riwayat berhasil ditambahkan.\n";
            break;
        case 7:
            tampilRiwayat();
            break;

        case 0:
            cout << "Terima kasih.\n";
            break;

        default:
            cout << "Menu tidak tersedia.\n";
        }

    } while (pilih != 0);

    return 0;
}