#include <iostream>
#include <string>

using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_buku;
    float harga_buku;
};

int main() {
    struct buku koleksi[5];

    // Mengisi data pada struct buku
    koleksi[0].judul_buku = "Pride and Prejudice";
    koleksi[0].pengarang = "Jane";
    koleksi[0].penerbit = "Publisher A";
    koleksi[0].tebal_buku = 300;
    koleksi[0].harga_buku = 20.500;

    koleksi[1].judul_buku = "To Kill a Mockingbird";
    koleksi[1].pengarang = "Harper Lee";
    koleksi[1].penerbit = "Publisher B";
    koleksi[1].tebal_buku = 350;
    koleksi[1].harga_buku = 180.750;

    koleksi[2].judul_buku = "1984";
    koleksi[2].pengarang = "George Orwell";
    koleksi[2].penerbit = "Publisher C";
    koleksi[2].tebal_buku = 280;
    koleksi[2].harga_buku = 150.250;

    koleksi[3].judul_buku = "The Great Gatsby";
    koleksi[3].pengarang = "F. Scott Fitzgerald";
    koleksi[3].penerbit = "Publisher D";
    koleksi[3].tebal_buku = 320;
    koleksi[3].harga_buku = 225.000;

    koleksi[4].judul_buku = "The Catcher in the Rye";
    koleksi[4].pengarang = "J.D. Salinger";
    koleksi[4].penerbit = "Publisher E";
    koleksi[4].tebal_buku = 270;
    koleksi[4].harga_buku = 19.99;

    // Menampilkan data dari struct buku
    cout << "Koleksi Buku:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Buku " << i+1 << ":" << endl;
        cout << "Judul: " << koleksi[i].judul_buku << endl;
        cout << "Pengarang: " << koleksi[i].pengarang << endl;
        cout << "Penerbit: " << koleksi[i].penerbit << endl;
        cout << "Tebal: " << koleksi[i].tebal_buku << " halaman" << endl;
        cout << "Harga: $" << koleksi[i].harga_buku << endl;
        cout << endl;
    }

    return 0;
}
