#include <iostream>
using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; buku buku2;

int main(){ 

buku2.judul_buku = "Matdis";
buku2.pengarang = "Gabriella";
buku2.penerbit = "Gramedia";
buku2.tebal_buku = 200;
buku2.harga_buku = 50.000;

//menampilkan data
cout << "Informasi Buku" << endl;
cout << "Judul : " << buku2.judul_buku << endl;
cout << "Pengarang : " <<  buku2.pengarang << endl;
cout << "Penerbit : " << buku2.penerbit << endl;
cout << "Tebal Halaman" << buku2.tebal_buku << endl;
cout << "Harga buku" << buku2.harga_buku << endl;

return 0;
}

