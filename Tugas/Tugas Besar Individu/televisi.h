//judul
    //header untuk class
    //Muhammad Naufal Abdulmajid
    //A11.2022.14727
#include <iostream>
#include <string>
using namespace std;
//kamus
class tipi {
public:
char merk[50];
char model[50];
int    inch;
int    harga;

void inputTv() {
    cout << "Inputkan Merk TV                   :";
    cin >> merk;
    cout << "Inputkan Model TV                  :";
    cin >> model;
    cout << "Inputkan Ukuran Layar TV (inch)    :";
    cin >> inch;
    cout << "Inputkan harga TV                  :";
    cin >> harga;
}

void printInfo () {
    cout << "Merk                : " << merk << endl;
    cout << "Model               : " << model << endl;
    cout << "Ukuran Layar (Inch) : " << inch << endl;
    cout << "Harga               : " << harga << endl;
}
};

