//judul
    //Tugas alpro class, search, sort
    //Muhammad Naufal Abdulmajid
    //A11.2022.14727

#include <iostream>
#include <string>
#include "menu.h"
#include "sorting.h"
#include "searching.h"
using namespace std;
//kamus


//deskripsi
main ()
{
jumlah(); //input jumlah tv
system("cls");
masuk(); //input tv
system("cls");
whatTodo();//pilih search atau tampilkan data
    if (whatnext == 1) //search
    {
        system("cls");
        searchApa(); //apa yang dicari
        system("cls");
        if (apaSearch == 1) //cari merk
        {
            cariMerk(televisi, tvcount);
        }
        else if (apaSearch == 2) //cari model
        {
            cariModel(televisi, tvcount);
        }
        else if (apaSearch == 3) //cari ukuran layar
        {
            cariLayar(televisi, tvcount);
        }
        else if (apaSearch == 4) //cari harga
        {
            cariHarga(televisi, tvcount);
        }
    }
    else if (whatnext == 2) //tampilkan data
    {
    sortConfirm(); //ingin sorting dulu atau tidak
    //jika ingin sorting dulu
    if (confirm == 'y')
    {
    sortApa(); //apa yang ingin di sort
    system("cls");
    if (apaSort == 1) //harga
        {
            if (sortType == 1) //ascend
              {
                AscendingHarga(televisi, tvcount);
              }
            else if (sortType == 2) //descend
              {
                DescendingHarga(televisi, tvcount);
              }
        }
    else if (apaSort == 2) //ukuran layar
        {
            if (sortType == 1) //ascend
              {
                AscendingLayar(televisi, tvcount);
              }
            else if (sortType == 2) //descend
              {
                DescendingLayar(televisi, tvcount);
              }
        }
    }
    system("cls");
    tampilSemua(); //menampilkan data
    }

}
