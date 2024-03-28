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