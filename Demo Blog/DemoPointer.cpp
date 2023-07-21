//judul
    //Demonstrasi Class
    //Muhammad Naufal Abdulmajid

#include <iostream>
#include <string>
using namespace std;
//kamus
class Mobil {
public:
    string merek;
    string model;
    int tahunProduksi;

    void tampilkanInfo() {
        cout << "Mobil " << merek << " " << model << ", tahun produksi " << tahunProduksi << endl;
    }
};
Mobil mobil1;

//deskripsi
int main() {
    
    mobil1.merek = "Toyota";
    mobil1.model = "Avanza";
    mobil1.tahunProduksi = 2020;

    mobil1.tampilkanInfo();

    return 0;
}
