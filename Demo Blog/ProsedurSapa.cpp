//judul
    //Demonstrasi Struct
    //Muhammad Naufal Abdulmajid

#include <iostream>
#include <string>
using namespace std;
//kamus
struct Mahasiswa {
    int nim;
    string nama;
    int usia;
};
Mahasiswa mhs1;

//deskripsi
int main() {

    mhs1.nim = 14727;
    mhs1.nama = "Muhammad Naufal";
    mhs1.usia = 19;

    cout << "Data Mahasiswa 1:" << endl;
    cout << "NIM: " << mhs1.nim << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << endl;

    return 0;
}
