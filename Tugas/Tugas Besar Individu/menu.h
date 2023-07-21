//judul
    //header untuk menu
    //Muhammad Naufal Abdulmajid
    //A11.2022.14727

#include <iostream>
#include "televisi.h"
using namespace std;

//kamus
    int loop;
    int tvcount;

    //variabel untuk pemilihan
    char confirm;
    int whatnext;
    int apaSort;
    int apaSearch;
    int sortType;

    //prosedur
    void jumlah();
    void masuk();
    void whatTodo();
    void tampilSemua();
    void sortConfirm ();
    void sortApa    ();
    void searchApa ();
    //untuk memakai class
    tipi televisi[10];

//deskripsi
void jumlah ()
{
startinput:
cout << "Masukkan Jumlah TV (maks 10): ";
cin >> tvcount;
    if (tvcount > 10) {
        system("cls");
        goto startinput;
    }
}

void masuk ()
{
loop = 0;
while (loop < tvcount)
    {
        cout << "TV nomor " << loop + 1 << endl;
        televisi[loop].inputTv();
        cout << "---------------------------------------" << endl;
        loop = loop + 1;
    }
}

void whatTodo()
{
//deskripsi
    cout << "Apa yang ingin anda lakukan selanjutnya?" << endl;
    cout << "(1) Cari TV" << endl;
    cout << "(2) Tampilkan Semua Data" << endl;
    apaselanjutnya:
    cout << "pilih (1/2) : ";
    cin >> whatnext;
    if (whatnext < 1 || whatnext > 2)
        {
        goto apaselanjutnya;
        }
}
void searchApa ()
{
caristart:
cout << "Apa Yang Ingin Dicari?" << endl;
cout << "(1) Merk TV" << endl;
cout << "(2) Model TV" << endl;
cout << "(3) Ukuran Layar TV" << endl;
cout << "(4) Harga TV" << endl;
cout << "Pilih (1/2/3/4) : ";
cin >> apaSearch;

    if (apaSearch < 1 || apaSearch > 4)
    {
    goto caristart;
    }
}

void tampilSemua ()
{
loop = 0;
while (loop < tvcount)
{
    cout << "TV nomor " << loop + 1 << endl;
    televisi[loop].printInfo();
    cout << "---------------------------------------" << endl;
    loop = loop + 1;
}
}

void sortConfirm () {
//kamus lokal
bool ulang;
//deskripsi
confirmstart:
cout << "Apakah anda ingin mengurutkan data? (y/n) : ";
cin >> confirm;
confirm = tolower(confirm);
if (confirm == 'y' || confirm == 'n')
{
    ulang = false;
}
else {
    ulang = true;
}
if (ulang == true)
{
    goto confirmstart;
}
}

void sortApa () {
selectstart:
cout << "Apa Yang Ingin Diurutkan?" << endl;
cout << "(1) Harga TV" << endl;
cout << "(2) Ukuran Layar TV" << endl;
cout << "Pilih (1/2) : ";
cin >> apaSort;

if (apaSort < 1 || apaSort > 2)
{
goto selectstart;
}

selectmid:
cout << "Bagaimana Cara Pengurutannya?" << endl;
cout << "(1) Ascending" << endl;
cout << "(2) Descending" << endl;
cout << "Pilih (1/2) : ";
cin >> sortType;
if (sortType < 1 || sortType > 2)
{
goto selectmid;
}
}


