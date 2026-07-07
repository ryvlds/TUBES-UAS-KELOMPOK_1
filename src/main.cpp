#include <iostream>
#include "../include/parking.h"
#include "../include/slot.h"
#include "../include/history.h"
using namespace std;

int main()
{
    int pilih;

    do
    {
        cout << "\n=========================\n";
        cout << "   SMART PARKING SYSTEM\n";
        cout << "=========================\n";
        cout << "1. Kendaraan Masuk\n";
        cout << "2. Kendaraan Keluar\n";
        cout << "3. Tampilkan Kendaraan\n";
        cout << "4. Lihat Slot Parkir\n";
        cout << "5. Cari Slot Kosong\n";
        cout << "6. Tampilkan Riwayat Parkir\n";
        cout << "0. Keluar\n";
        cout << "=====================================\n";
        cout << "Pilih Menu : ";
        cin >> pilih;

        switch (pilih)
        {
        case 1:
            kendaraanMasuk();
            break;

        case 2:
            kendaraanKeluar();
            break;

        case 3:
            tampilkanKendaraan();
            break;

        case 4:
            tampilSlot();
            break;

        case 5:
            cariSlotKosong();
            break;

        case 6:
            tampilRiwayat();
            break;

        case 0:
            cout << "\nTerima kasih telah menggunakan Smart Parking System.\n";
            break;

        default:
            cout << "\nPilihan tidak tersedia!\n";
        }

    } while (pilih != 0);

    return 0;
}