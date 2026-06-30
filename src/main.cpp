#include <iostream>
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
        cout << "3. Lihat Slot Parkir\n";
        cout << "4. Cari Slot Kosong\n";
        cout << "5. Riwayat Parkir\n";
        cout << "0. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;

    } while (pilih != 0);

    return 0;
}