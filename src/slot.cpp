#include <iostream>
#include "../include/slot.h"

using namespace std;

// true = terisi, false = kosong
bool slotParkir[6] = {
    false,  
    true,   
    false,  
    true,   
    false,  
    false   
};

void tampilSlot()
{
    cout << "\n=== DAFTAR SLOT PARKIR ===\n";

    for(int i = 0; i < 6; i++)
    {
        cout << "A" << i + 1 << " - ";

        if(slotParkir[i])
            cout << "Terisi";
        else
            cout << "Kosong";

        cout << endl;
    }
        

    
}
void cariSlotKosong()
{
    cout << "\n=== SLOT KOSONG ===\n";

    bool ditemukan = false;

    for(int i = 0; i < 6; i++)
    {
        if(!slotParkir[i])
        {
            cout << "A" << i + 1 << endl;
            ditemukan = true;
        }
    }

    if(!ditemukan)
    {
        cout << "Tidak ada slot kosong.\n";
    }
}



