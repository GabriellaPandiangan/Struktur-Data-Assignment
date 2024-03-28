# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Dasar Teori](#dasar-teori)
- [Guided](#guided)
- [Unguided](#unguided)
- [Kesimpulan](#kesimpulan)
- [Referensi](#referensi)

## Dasar Teori

Penjelasan Teori:
membahas tentang -tipe data primitif
                 -tipe data abstrak
                 -tipe data koleksi
                 -fungsi class dan struct
                 -perbedaan array dan map

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    cout<<"Masukan Operator: ";
    cin>>op;
    cout<<"\nMasukan Bilangan ke-1 dan ke-2: ";
    cin>>num1>>num2;

switch(op)
{
case '+':
    cout<< num1 + num2;
    break;
case '-':
    cout<< num1 - num2;
case '*':
    cout<< num1 * num2;
case '/':
    cout<< num1 / num2;
default:
    cout<< "Error! operator is not correct";
}
return 0;
}

```
Kode ini merupakan program untuk menampilkan aritmatika dasar penjumlahan, pengurangan, perkalian, dan pembagian untuk dua bilangan. pertama-tama program user diminta untuk menginputkan operator yang akan dipilih untuk melakukan operasi aritmatika dasar.kemudian input operator, setelah itu user akan diminta untuk menginputkan angka pertama dan angka kedua. Lalu program akan menjalankannya.

### 2. Tipe Data Abstrak

```C++
#include <iostream>
#include <stdio.h>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 25;

    cout << "Nama : " << mhs1.name << endl;
    cout << "Alamat : " << mhs1.address << endl;
    cout << "Usia : " << mhs1.age << endl;
    cout << "Nama : " << mhs2.name << endl;
    cout << "Alamat : " << mhs2.address << endl;
    cout << "Usia : " << mhs2.age << endl;
    return 0;
}
```
Kode ini merupakan contoh program yang menggunakan tipe data abstrak, yaitu struct. Program diatas menggunakan struct `Mahasiswa` yang memuat tiga nilai yaitu nama dan alamat yang sama-sama bertipe data character, dan ada age yang bertipe data integer. Lalu terdapat `const` pada nilai name dan adsress yang berfungsi supaya object atau variabel tidak dapat dimodifikasi. Setelah itu kita bisa mengisi data dengan membuat dua variabel yang bertipe data struct `Mahasiswa`. Setelah itu kita mengisi data tersebut ke variabel dan menampilkannya menggunakan fungsi `cout`.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
#include <array>
using namespace std;

int main() {
    // Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    // Mencetak array dengan tab
    cout << "Isi array pertama : " << nilai[0] << endl;
    cout << "Isi array kedua : " << nilai[1] << endl;
    cout << "Isi array ketiga : " << nilai[2] << endl;
    cout << "Isi array keempat : " << nilai[3] << endl;
    cout << "Isi array kelima : " << nilai[4] << endl;
    
    return 0;
}
```
Kode ini merupakan program yang menggunakan tipe data koleksi. Dalam hal ini kita mendeklarasikan array `nilai` yang mempunyai tipe data integer. nilai `[5]` merupakan ukuran panjang array yang akan kita gunakan. kemudian kita mengisikan data ke dalam variabel `nilai`, seperti `nilai[0]`, `nilai[1]` dan seterusnya atau elemen pertama dalam array kita isi dengan angka 23, lalu untuk elemen ke dua kita isi dengan angka 50, sampai seterusnya. langkah terakhir setelah  selesai mengisikan nilai ke setiap elemen dalam array kita bisa menampilkan setiap nilai dalam array menggunakan fungsi `cout`.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>

int penjumlahan(int a, int b) {  
    //fungsi ini mengambil dua parameter bilangan bulat (int a dan int b) dan          mengembalikan hasil penjumlahan keduanya
    return a + b;
}

double perkalian(double a, double b) { 
    //fungsi ini mengambil dua parameter bilangan pecahan (double a dan double b) dan mengembalikkan hasil perkalian keduanya
    return a * b;
}

bool lebihbesar(int a, int b) { 
    // fungsi ini mengambil dua parameter bilangan bulat (int a dan int b) dan mengembalikkan nilai true jika a lebih besar dari b, dan false sebaliknya
    return a > b;
}   

int main() {
    int hasilpenjumlahan = penjumlahan(8, 4); 
    // Dalam fungsi main(), kita menggunakan fungsi tambah untuk menjumlahkan dua bilangan bulat (8 dan 5)
    double hasilperkalian = perkalian(8.4, 22.4); 
    //Dalam fungsi main(), kita menggunakan fungsi kali untuk mengalikan dua bilangan pecahan (8.5 , 23.5)
    bool hasilperbandingan = lebihbesar(8, 4);
     //Dalam fungsi main(), kita menggunakan fungsi lebih besar untuk membandingkan dua bilangan bulat (8, 5)

    std::cout << "Hasil Penjumlahan: " << hasilpenjumlahan << std::endl;
    std::cout << "Hasil Perkalian: " <<hasilperkalian << std::endl;

    if (hasilperbandingan) {
        std::cout << "8 lebih besar dari 4" <<std::endl;
    } else {
        std::cout << "8 tidak lebih besar dari 4" <<std::endl;
    }
    return 0;
}

//Kesimpulan
/*Program diatas menunjukkan penggunaan tipe-tipe data primitif yaitu 
int(bilangan bulat), double(bilangan pecahan), dan bool(nilai boolean), 
serta tiga fungsi yang mengoperasikan tipe data tersebut. 
program ini menjelaskan bagaimana fumgsi-fungsi dapat digunakan untuk melakukan operasi sederhana seperti penjumlahan, perkalian, dan perbandingan.
 Hal ini menunjukkan fleksabilitas dan kekuatan dari bahasa pemprograman c++ untuk melakukan berbagai jenis operasi pada tipe data primitif.*/
```
#### Output:
![Cuplikan layar 2024-03-20 050811](https://github.com/GabriellaPandiangan/Struktur-Data-Assignment/assets/160801863/b184ae58-63ab-49ee-b3bc-5e5881cf2f83)


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nama;
    int usia;
    double nilai;
};
//Pengertian
/* Sturct adalah kumpulan dari satu atau lebih variabel yang dikellompokkan bersama dalam satu unit.
Didalam struct, variabel-variabel tsb disebut sebagai anggota(member)struct. 
dalam contoh diatas, mahasiswa adalah sebuah struct yang memiliki tiga anggota yaitu nama,usia,dan nilai
struct digunakan untuk menyimpan data yang terkait satu sama lain.
Dalam contoh diatas, mhs digunakan untuk menyimpan informasi tentang seorang mhs*/

class Mobil {
public:
    std::string merek;
    std::string model;
    int tahun;

    void printInfo() {
        std::cout << "Mobil " << merek << " " << model << " tahun" << tahun << std::endl;
    }
};
//Pengertian
/* Class adalah tipe data yang memiliki data member dan fungsi member.
 Data member adalah variabel yang menyimpan data,
sedangkan fungsi member adalah fungsi yang beroperasi pada data tersebut. 
Dalam contoh diatas Mobil adalah sebuah class yang memiliki tiga data member yaitu merek, model, dan tahun,
serta fungsi member yaitu printinfo().
Class digunakan untuk memodelkan objek dalam pemprograman berorientasi objek(OOP) dan untuk mencetak informasi 
tentang mobil tersebut
*/

int main() {
    Mahasiswa mhs1;
    mhs1.nama = "Gabriella";
    mhs1.usia = 19;
    mhs1.nilai = 96;

    std::cout << "Nama Mahasiswa: " <<mhs1.nama << std::endl;
    std::cout << "Usia Mahasiswa: " <<mhs1.usia << std::endl;
    std::cout << "Nilai Mahasiswa: " <<mhs1.nilai << std::endl;

    Mobil mobil1;
    mobil1.merek = "Toyota";
    mobil1.model = "Avanza";
    mobil1.tahun = 2005;

    mobil1.printInfo();

    return 0;
}
/* Perbedaan utama antara class dan struct adalah pada aksebilitas default dari anggota-anggotanya.
 Pada struct, anggotanya secara default bersifat private.\
 Selain itu, dalam praktiknya, class sering digunakan untuk mengimplementasikan konsep OOP yang
 sedangkan struct sering digunakan untuk menyimpan sekumpulan data sederhana yang secara langsung diakses
  oleh berbagai bagian dalam program.  */
```
#### Output:
![Cuplikan layar 2024-03-20 051020](https://github.com/GabriellaPandiangan/Struktur-Data-Assignment/assets/160801863/79146c61-ad00-445b-84a4-9bbf79f9c777)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map
```C++
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> umur; //membuat kode dengan string(nama),dan nilai bertipe int(umur)
    umur["Gabriella"] = 19;
    umur["Eccha"] = 18;
    umur["Yuni"] = 20;
    std::cout << "Umur Gabriella: " << umur["Gabriella"] << std::endl;
    std::cout << "Umur Eccha: " << umur["Eccha"] << std::endl;
    std::cout << "Umur Yuni: " << umur["Yuni"] << std::endl;
    return 0;
} 
/*setelah itu untuk mengakses nilai dari map dengan menggunakan kunci(umur[Gabriella], dain lain-lain
untuk menampilkan sebagainya)*/

/*Perbedaan antara Array dan Map*/
// Dalam indeks:
/* Array menggunakan indeks berbasis angka(Integer) untuk mengakses elemennya.
 Indeks array harus berurutan dan dimulai dari 0. Sedangkan,
 Map menggunakan kunci (Key) untuk mengakses nialinya.
 Kunci tidak harus berurutan atau unik */

 //Dalam Ukuran
 /*ukuran array harus ditentukan pada saat deklarasi, dan ukurannya tetap selama program berjalan. sedangkan,a
 Map dapat berubah dinamis, artinya kita dapat menambahkan atau menghapus elemen dari map saat program berjalan
  tanpa perlu mengubah ukuran map secara eksplisit.*/

 //Dalam elemen
 /*Elemen-elemen array harus memiliki tipe data yang sama. sedangkan,
 map setiap elemen dalam map terdiri dari sebuah pasangan kunci nilai, dimana tipe data kunci dan nilai tidak harus sama.
 ini memungkinkan fleksabilitas yang lebih besar dalam menyimpan dan
 mengakses data dengan menggunakan std::map, kita dapat memetakan kunci ke nilai 
 dengan cara yang lebih fleksibel daripada array, terutama ketika kunci bukanlah bilangan bulat berurutan
 atau ketika kita membutuhkan ukuran yang dinamis dan asosiasi antara kunci dan nilai*/
```
#### Output:
[Cuplikan layar 2024-03-20 051054](https://github.com/GabriellaPandiangan/Struktur-Data-Assignment/assets/160801863/2e283ba8-8d42-4565-9216-11b46a80b91d)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dari seluruh program ini adalah kita dapat mengetahui lebih dalam lagi tentang tipe-tipe data primitif.
kemudia dapat mengetahui perbedaan utama class dan struct dan elemen-elemen array dan map.


## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
