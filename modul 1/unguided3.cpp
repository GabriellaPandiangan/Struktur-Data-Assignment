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
} /*setelah itu untuk mengakses nilai dari map dengan menggunakan kunci(umur[Gabriella], dain lain-lain
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