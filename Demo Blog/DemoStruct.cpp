//judul
    //Demonstrasi Pointer
    //Muhammad Naufal Abdulmajid

#include <iostream>
using namespace std;
//kamus
char greeting[255];
char* pointerToGreeting;

//deskripsi
int main() {

    strcpy(greeting, "Hello, World!");
    pointerToGreeting = greeting; // Mendapatkan alamat memori dari variabel greeting

    // Menggunakan pointer untuk mengakses nilai dan menampilkan "Hello, World!"
    cout << pointerToGreeting << endl;

    return 0;
}
