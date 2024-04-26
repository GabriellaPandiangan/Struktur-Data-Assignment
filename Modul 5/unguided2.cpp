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
    struct buku koleksi; // Deklarasi satu variabel struct buku

    // Mengisi data pada variabel struct buku
    koleksi.judul_buku[0] = "Pride and Prejudice";
    koleksi.pengarang[0] = "Jane Austen";
    koleksi.penerbit[0] = "Publisher A";
    koleksi.tebal_buku[0] = 300;
    koleksi.harga_buku[0] = 20.5;

    koleksi.judul_buku[1] = "To Kill a Mockingbird";
    koleksi.pengarang[1] = "Harper Lee";
    koleksi.penerbit[1] = "Publisher B";
    koleksi.tebal_buku[1] = 350;
    koleksi.harga_buku[1] = 18.75;

    koleksi.judul_buku[2] = "1984";
    koleksi.pengarang[2] = "George Orwell";
    koleksi.penerbit[2] = "Publisher C";
    koleksi.tebal_buku[2] = 280;
    koleksi.harga_buku[2] = 15.25;

    koleksi.judul_buku[3] = "The Great Gatsby";
    koleksi.pengarang[3] = "F. Scott Fitzgerald";
    koleksi.penerbit[3] = "Publisher D";
    koleksi.tebal_buku[3] = 320;
    koleksi.harga_buku[3] = 22.0;

    koleksi.judul_buku[4] = "The Catcher in the Rye";
    koleksi.pengarang[4] = "J.D. Salinger";
    koleksi.penerbit[4] = "Publisher E";
    koleksi.tebal_buku[4] = 270;
    koleksi.harga_buku[4] = 19.99;

    // Menampilkan data dari variabel struct buku
    cout << "Koleksi Buku:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Buku " << i+1 << ":" << endl;
        cout << "Judul: " << koleksi.judul_buku[i] << endl;
        cout << "Pengarang: " << koleksi.pengarang[i] << endl;
        cout << "Penerbit: " << koleksi.penerbit[i] << endl;
        cout << "Tebal Buku: " << koleksi.tebal_buku[i] << " halaman" << endl;
        cout << "Harga Buku: $" << koleksi.harga_buku[i] << endl;
        cout << endl;
    }

    return 0;
}
