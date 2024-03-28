#include <iostream>

int penjumlahan(int a, int b) { //fungsi ini mengambil dua parameter bilangan bulat (int a dan int b) dan mengembalikan hasil penjumlahan keduanya
    return a + b;
}

double perkalian(double a, double b) { //fungsi ini mengambil dua parameter bilangan pecahan (double a dan double b) dan mengembalikkan hasil perkalian keduanya
    return a * b;
}

bool lebihbesar(int a, int b) { // fungsi ini mengambil dua parameter bilangan bulat (int a dan int b) dan mengembalikkan nilai true jika a lebih besar dari b, dan false sebaliknya
    return a > b;
}

int main() {
    int hasilpenjumlahan = penjumlahan(8, 4); // Dalam fungsi main(), kita menggunakan fungsi tambah untuk menjumlahkan dua bilangan bulat (8 dan 5)
    double hasilperkalian = perkalian(8.4, 22.4); //Dalam fungsi main(), kita menggunakan fungsi kali untuk mengalikan dua bilangan pecahan (8.5 , 23.5)
    bool hasilperbandingan = lebihbesar(8, 4); //Dalam fungsi main(), kita menggunakan fungsi lebih besar untuk membandingkan dua bilangan bulat (8, 5)

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
