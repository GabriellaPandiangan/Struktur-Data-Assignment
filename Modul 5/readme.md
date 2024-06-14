# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
1 Variabel
Analogi dari variabel seperti sebuah tempat untuk menampung atau
menyimpan suatu data dengan tipe data tertentu. Format penulisan/deklarasi
variabel adalah tipe_data nama_variabel, contoh int berat, string mata_kuliah, char jenis_kelamin. Secara default sebuah variabel hanya dapat menampung sebuah nilai misalnya variabel berat hanya dapat menampung satu nilai berat
175 kg, tidak bisa diisi lebih dari satu. Jika diinginkan dapat menampung lebih dari satu nilai maka deklarasikan variabel sebagai array, dengan format penulisan tipe_data nama_variabel [banyak data]. Variabel terbagi menjadi 2
jenis yakni variabel lokal dan global, perbedaannya tersaji dalam tabel 1

Variabel Lokal:
Dibuat/dideklarasikan didalam
fungsi/prosedur

Dikenali/dapat dipanggil hanya oleh
fungsi atau prosedur yang
mendeklarasikannya

Variabel global:
Dibuat/dideklarasikan diluar fungsi
atau prosedur

Dikenali atau dipanggil oleh semua
fungsi atau prosedur yang ada didalam
program

2 Struktur (Struct)
Merupakan tipe data bentukan yang terdiri dari beberapa tipe data standar
maupun tipe data bentukan lainnya yang telah didefinisikan sebelumnya.
Sebagaimana telah disinggung sebelumnya, keyword yang digunakan untuk
membuat/mendeklarasikan sebuah struktur yakni struct. Terdapat banyak format
penulisan diantaranya :
Tipe data struct yang telah dibuat (menggunakan cara 2 dan 3) menjadi tipe
data standar yang penggunaannya sama dengan tipe data standar lainnya.

struct {
string namaDepan;
string namaBelakang;
int usia;
char jenis_kelamin;
}namaVariabelStrukA, namaVariabelStrukB;

struct namaTipe{
string namaDepan;
string namaTengah;
string namaBelakang;
}; struct namaTipe namaVariabelStrukA, namaVariabelStrukB;

typedef struct {
string namaDepan;
string namaTengah;
string namaBelakang;
}namaTipe;
namaTipe namaVariabelStrukA, namaVariabelStrukB;

Tipe data struct yang telah dibuat (menggunakan cara 2 dan 3) menjadi tipe
data standar yang penggunaannya sama dengan tipe data standar lainnya.


## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.
Jawaban: 
```
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
```

//hasil output
```Informasi Buku
Judul : Algoritma Pemprograman
Pengarang : Gabriella
Penerbit : Gramedia
Tebal Halaman300
Harga buku : 120000

//buku 2
```#include <iostream>
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
```


### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.Hewan, Nama_hewan, Jenis_kelamin, Cara berkembangbiak, Alat pernafasan, Tempat hidup, Apakah Karnivora ?, Hewan Darat, Jumlah Kaki, Apakah menyusui?, Suara. Hewan Laut, Bentuk sirip, Bentuk pertahanan diri

Jawaban:
```#include <iostream>
using namespace std;

struct Hewan {
    string nama_hewan;
    string jenis_kelamin;
    string cara_berkembangbiak;
    string alat_pernafasan;
    string tempat_hidup;
    string apakah_karnivora;
}; Hewan info_hewan;

struct Hewan_Darat{
    int jumlah_kaki;
    string apakah_menyusui;
    string suara;
    Hewan info_hewan;
}; Hewan_Darat hewan1;

struct Hewan_Laut{
    string bentuk_sirip;
    string bentuk_pertahanan_diri;
    Hewan info_hewan;
}; Hewan_Laut hewan2;

int main() {
    // Membuat dan mengisi Hewan
    hewan1.info_hewan.nama_hewan = "Singa" ;
    hewan1.info_hewan.jenis_kelamin = "Jantan";
    hewan1.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan1.info_hewan.alat_pernafasan = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Darat";
    hewan1.info_hewan.apakah_karnivora = " Ya";
    hewan1.apakah_menyusui = "Ya";
    hewan1.suara = " arggg";

    hewan2.info_hewan.nama_hewan = "Hiu" ;
    hewan2.info_hewan.jenis_kelamin = "Jantan";
    hewan2.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan2.info_hewan.alat_pernafasan = "Insang";
    hewan2.info_hewan.tempat_hidup = "Laut";
    hewan2.info_hewan.apakah_karnivora = " Ya";
    hewan2.bentuk_sirip = "Membulat";
    hewan2.bentuk_pertahanan_diri = " Menyerang ";

// Menampilkan informasi Hewan
    cout << " Nama Hewan: " <<hewan1.info_hewan.nama_hewan << endl;
    cout << " Jenis Kelamin: " <<hewan1.info_hewan.jenis_kelamin << endl;
    cout << " Cara Berkembangbiak: " <<hewan1.info_hewan.cara_berkembangbiak<< endl;
    cout << " Alat Pernafasan: " <<hewan1.info_hewan.alat_pernafasan << endl;
    cout << " Tempat Hidup: " <<hewan1.info_hewan.tempat_hidup << endl;
    cout << " Apakah Karnivora: " <<hewan1.info_hewan.apakah_karnivora << endl;
    cout << " Apakah Menyusui " <<hewan1.apakah_menyusui << endl;
    cout << " Suara: " <<hewan1.suara << endl;

    cout << "\n Nama Hewan: " <<hewan2.info_hewan.nama_hewan << endl;
    cout << " Jenis Kelamin: " <<hewan2.info_hewan.jenis_kelamin << endl;
    cout << " Cara Berkembangbiak: " <<hewan2.info_hewan.cara_berkembangbiak<< endl;
    cout << " Alat Pernafasan: " <<hewan2.info_hewan.alat_pernafasan << endl;
    cout << " Tempat Hidup: " <<hewan2.info_hewan.tempat_hidup << endl;
    cout << " Apakah Karnivora: " <<hewan2.info_hewan.apakah_karnivora << endl;
    cout << " Bentuk Sirip " <<hewan2.bentuk_sirip << endl;
    cout << " Bentuk Pertahanan Diri: " <<hewan2.bentuk_pertahanan_diri << endl;

return 0;
}
```

## hasil output
```Nama Hewan: Singa
 Jenis Kelamin: Jantan
 Cara Berkembangbiak: Melahirkan
 Alat Pernafasan: Paru-paru
 Tempat Hidup: Darat
 Apakah Karnivora:  Ya
 Apakah Menyusui Ya
 Suara:  arggg

 Nama Hewan: Hiu
 Jenis Kelamin: Jantan
 Cara Berkembangbiak: Melahirkan   
 Alat Pernafasan: Insang
 Tempat Hidup: Laut
 Apakah Karnivora:  Ya
 Bentuk Sirip Membulat
 Bentuk Pertahanan Diri:  Menyerang
```

## Unguided

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.
```
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
```

## hasil output
```
Koleksi Buku:
Buku 1:
Judul: Pride and Prejudice
Pengarang: Jane
Penerbit: Publisher A
Tebal: 300 halaman
Harga: 20.500

Buku 2:
Judul: To Kill a Mockingbird
Pengarang: Harper Lee
Penerbit: Publisher B
Tebal: 350 halaman
Harga: 180.750

Buku 3:
Judul: 1984
Pengarang: George Orwell
Penerbit: Publisher C
Tebal: 280 halaman
Harga: 150.250

Buku 4:
Judul: The Great Gatsby
Pengarang: F. Scott Fitzgerald
Penerbit: Publisher D
Tebal: 320 halaman
Harga: 225.000

Buku 5:
Judul: The Catcher in the Rye
Pengarang: J.D. Salinger
Penerbit: Publisher E
Tebal: 270 halaman
Harga: 19.99
```
## penjelasan
Program ini merupakan contoh penggunaan struktur (struct) dalam bahasa pemrograman C++. Struktur digunakan untuk menggabungkan beberapa tipe data yang berbeda ke dalam satu kesatuan yang lebih besar.

Pada program ini, sebuah struct bernama buku dideklarasikan. Struct ini memiliki lima array yang masing-masing menyimpan informasi tentang judul buku, pengarang, penerbit, tebal buku (dalam halaman), dan harga buku.

Kemudian, dalam fungsi main(), sebuah variabel koleksi dengan tipe data buku dibuat untuk menyimpan koleksi buku. Data buku diisi ke dalam variabel koleksi menggunakan indeks array yang sesuai.

Setelah data buku diisi, dilakukan iterasi melalui variabel koleksi untuk menampilkan informasi buku yang tersimpan. Setiap informasi buku (judul, pengarang, penerbit, tebal, dan harga) ditampilkan di layar menggunakan perulangan for.

Hasil output:
menampilkan informasi buku dari indeks 1 hingga 5 sesuai dengan pengisian data yang dilakukan dalam fungsi main(). Setiap buku ditampilkan dengan judul, pengarang, penerbit, tebal, dan harga yang sesuai.

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I,berjenis Array.
Jawaban:

```#include <iostream>
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
```

## hasil output
```Koleksi Buku:
Buku 1:
Judul: Pride and Prejudice
Pengarang: Jane Austen
Penerbit: Publisher A
Tebal Buku: 300 halaman
Harga Buku: 20.5

Buku 2:
Judul: To Kill a Mockingbird       
Pengarang: Harper Lee
Penerbit: Publisher B
Tebal Buku: 350 halaman
Harga Buku: 18.75

Buku 3:
Judul: 1984
Pengarang: George Orwell
Penerbit: Publisher C
Tebal Buku: 280 halaman
Harga Buku: 15.25

Buku 4:
Judul: The Great Gatsby
Pengarang: F. Scott Fitzgerald     
Penerbit: Publisher D
Tebal Buku: 320 halaman
Harga Buku: 22

Buku 5:
Judul: The Catcher in the Rye      
Pengarang: J.D. Salinger
Penerbit: Publisher E
Tebal Buku: 270 halaman
Harga Buku: 19.99
```
## penjelasan
Pada program ini, struktur buku masih menyimpan informasi tentang judul, pengarang, penerbit, tebal buku, dan harga buku. Namun, kali ini, pengisian data dimulai dari indeks 0 hingga 4, sesuai dengan indeks array dalam bahasa C++ yang dimulai dari 0.

Data buku diisi ke dalam variabel koleksi menggunakan indeks array yang sesuai dengan urutan buku. Misalnya, buku pertama diisi pada indeks 0, buku kedua diisi pada indeks 1, dan seterusnya.

Hasil output menampilkan informasi buku dengan cara yang sama seperti sebelumnya, namun dengan beberapa perubahan kecil dalam format penampilan, seperti penambahan "Buku" sebelum nomor buku, dan penyesuaian penulisan untuk tebal dan harga buku.

## kesimpulan
pada modul ini  kita belajar mengenai struct yang merupakan tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain. Penggunaan/pemakaian tipe data struct dilakukan dengan membuat suatu variabel yang bertipe data struct tersebut. Pengaksesan elemen struct dilakukan secara individual dengan menyebutkan nama variabel struct diikuti dengan operator titik (.). Terdapat 3 contoh cara penggunaan struct diatas dan kita dapat meingimplementasikan mengenai memodifikasi kode pada guided, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan dan mengubah deklarasi variable struct menjadi berjenis array

## references
{1]Hariyanto, Bambang, 2000, Struktur Data, Bandung.
