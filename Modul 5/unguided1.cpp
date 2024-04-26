#include <iostream>
#include <string>

using namespace std;

struct buku {
    string judul_buku[5];
    string pengarang[5];
    string penerbit[5];
    int tebal_buku[5];
    float harga_buku[5];
};

int main() {
    struct buku koleksi;

    // Mengisi data pada struct buku
    koleksi.judul_buku[1]= "Pride and Prejudice";
    koleksi.pengarang[1] = "Jane";
    koleksi.penerbit[1] = "Publisher A";
    koleksi.tebal_buku[1] = 300;
    koleksi.harga_buku[1] = 20.500;

    koleksi.judul_buku[2] = "To Kill a Mockingbird";
    koleksi.pengarang[2] = "Harper Lee";
    koleksi.penerbit[2] = "Publisher B";
    koleksi.tebal_buku[2] = 350;
    koleksi.harga_buku[2] = 180.750;

    koleksi.judul_buku[3] = "1984";
    koleksi.pengarang[3] = "George Orwell";
    koleksi.penerbit[3] = "Publisher C";
    koleksi.tebal_buku[3] = 280;
    koleksi.harga_buku[3] = 150.250;

    koleksi.judul_buku[4] = "The Great Gatsby";
    koleksi.pengarang[4] = "F. Scott Fitzgerald";
    koleksi.penerbit[4] = "Publisher D";
    koleksi.tebal_buku[4] = 320;
    koleksi.harga_buku[4] = 225.000;

    koleksi.judul_buku[5] = "The Catcher in the Rye";
    koleksi.pengarang[5] = "J.D. Salinger";
    koleksi.penerbit[5] = "Publisher E";
    koleksi.tebal_buku[5] = 270;
    koleksi.harga_buku[5] = 19.99;

    // Menampilkan data dari struct buku
    cout << "Koleksi Buku:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Buku " << i+1 << ":" << endl;
        cout << "Judul: " << koleksi.judul_buku[i] << endl;
        cout << "Pengarang: " << koleksi.pengarang[i] << endl;
        cout << "Penerbit: " << koleksi.penerbit[i] << endl;
        cout << "Tebal: " << koleksi.tebal_buku[i] << " halaman" << endl;
        cout << "Harga: $" << koleksi.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}

