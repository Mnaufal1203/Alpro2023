//judul
    //header untuk searching barang
    //Muhammad Naufal Abdulmajid
    //A11.2022.14727

    #include <iostream>
    #include <cstring>
    using namespace std;
//kamus
    void cariMerk  (barang brg[], int loopcount);

//deskripsi
void cariAngka (int x, int loopcount)
{
//kamus lokal
    int cariNomor;
    bool Isfound = false;
//deskripsi
    cout << "Masukkan Merk Yang Ingin Dicari: ";
    cin >> cariNomor;
    cout << "Hasil Pencarian:" << endl;
    loop = 0;
    while (loop < loopcount) {
        if (cariNomor == x) {
            Isfound = true;
            cout << "Ketemu"
        }
        loop = loop + 1;
    }

    if (Isfound == false)
        {
        cout << " Tidak Ketemu" << endl;
        }
}

#include <iostream>

int factorial(int n) {
    if (n == 0) {
        return 1; // Kondisi dasar, faktorial 0 adalah 1
    } else {
        return n * factorial(n - 1); // Pemanggilan diri sendiri untuk menghitung faktorial n
    }
}