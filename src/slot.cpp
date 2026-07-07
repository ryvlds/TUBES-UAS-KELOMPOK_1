#include <iostream>
#include "../include/slot.h"
#include "../include/parking.h"

using namespace std;

const int TOTAL_SLOT = 6;

void tampilSlot()
{
    cout << "\n=== DAFTAR SLOT PARKIR ===\n";

    int jumlahTerisi = daftarParkir.size();

    for(int i = 0; i < TOTAL_SLOT; i++)
    {
        cout << "A" << i + 1 << " - ";

        if(i < jumlahTerisi)
            cout << "Terisi";
        else
            cout << "Kosong";

        cout << endl;
    }
        

    
}

void cariSlotKosong()
{
    cout << "\n=== SLOT KOSONG ===\n";

    int jumlahTerisi = daftarParkir.size();

    if(jumlahTerisi == TOTAL_SLOT)
    {
        cout << "Tidak ada slot kosong.\n";
        return;
        
    }

    for (int i = jumlahTerisi; i < TOTAL_SLOT; i++)
    {
        cout << "A" << i + 1 << endl;
    }
}



