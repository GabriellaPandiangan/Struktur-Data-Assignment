// buatlah sebuah struktur dengan nama buku yang berisi 
// judul_buku, pengarang, penerbit, tebal_halaman, harga_buku.
// isi dengan nilai kemudian tampilkan.
#include <iostream>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; buku buku1;

int main(){ 

buku1.judul_buku = "Algoritma Pemprograman";
buku1.pengarang = "Gabriella";
buku1.penerbit = "Gramedia";
buku1.tebal_buku = 300;
buku1.harga_buku = 120000;

//menampilkan data
cout << "Informasi Buku" << endl;
cout << "Judul : " << buku1.judul_buku << endl;
cout << "Pengarang : " <<  buku1.pengarang << endl;
cout << "Penerbit : " << buku1.penerbit << endl;
cout << "Tebal Halaman" << buku1.tebal_buku << endl;
cout << "Harga buku" << buku1.harga_buku << endl;

return 0;
} 