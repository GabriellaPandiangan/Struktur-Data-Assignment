# <h1 align="center">Laporan Praktikum Modul sorting</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
1. Konsep Dasar Sorting
 => Algoritma Sorting adalah algoritma untuk meletakkan kumpulan elemen data ke dalam urutan
tertentu, berdasarkan satu atau beberapa kunci ke dalam tiap-tiap elemen
=> Berdasarkan data terurutnya, algoritma sorting dibagi menjadi dua jenis, yaitu:
o Ascending; pengurutan dari terkecil hingga terbesar. Contoh: a, b, c, d, e.
o Descending; pengurutan dari nilai terbesar hingga terkecil. Contoh: e, d, c, b, a
2. Insertion Sort
Konsep dasar Algoritma Insertion Sort
Pseudocode Algoritma Insertion Sort:
Prosedur Insertion Sort dalam bahasa C++:
=> Cara mengurutkannya adalah dicek satu persatu mulai dari yang kedua sampai
dengan yang terakhir.
=> Apabila ditemukan data yang lebih kecil dari data sebelumnya, maka data tersebut
disisipkan pada posisi yang sesuai
## Guided 
### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort
```
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;
    
    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
             }//end of if
        }//end of for loop
     }//end of while loop
 }//end of bubble_sort

void print_array(double a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};
    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);
    bubble_sort(a, length);
    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
// Output array
Urutan bilangan sebelum sorting: 
22.1    15.3    8.2     33.21   99

Urutan bilangan setelah sorting: 
8.2     15.3    22.1    33.21   99
```
### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort
```
#include <iostream>
using namespace std;
void insertion_sort(char arr[], int length) {
    int i, j;
    char tmp;
    for (i = 1; i < length; i++) {
        j = i;

        while (j > 0 && arr[j - 1] < arr[j]) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }//end of while loop
    }//end of for loop
}
void print_array(char a[], int length) {
    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
    insertion_sort(a, length);
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}

//output array
Urutan karakter sebelum sorting: 
c       f       a       z       d       p

Urutan karakter setelah sorting: 
z       p       f       d       c       a
## Unguided

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!
```C++
#include <iostream>

void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            // Swap arr[i] and arr[maxIndex]
            double temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main() {
    const int jumlahMahasiswa = 5;
    double IPS[jumlahMahasiswa] = {3.8, 2.9, 3.3, 4.0, 2.4};

    std::cout << "IPS sebelum diurutkan:" << std::endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << IPS[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(IPS, jumlahMahasiswa);

    std::cout << "IPS setelah diurutkan:" << std::endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << IPS[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//output array
IPS sebelum diurutkan:
3.8 2.9 3.3 4 2.4 
IPS setelah diurutkan:
4 3.8 3.3 2.9 2.4

##Penjelasan
Deklarasi Fungsi selectionSort:
Fungsi ini menerima sebuah array arr dan panjang array n. Fungsi tersebut mengurutkan array arr dalam urutan non-menurun menggunakan algoritma selection sort.

Fungsi main():

Mendeklarasikan sebuah array IPS yang berisi indeks prestasi (IP) mahasiswa.
Mengeluarkan isi array IPS sebelum diurutkan.
Memanggil fungsi selectionSort() untuk mengurutkan array IPS.
Mengeluarkan isi array IPS setelah diurutkan.

Proses Pengurutan:

Iterasi pertama dimulai dari elemen pertama hingga elemen sebelum terakhir. Di setiap iterasi, elemen tersebut dianggap sebagai elemen maksimum.
Iterasi kedua dimulai dari elemen setelah elemen yang dipilih pada iterasi pertama hingga elemen terakhir. Di setiap iterasi kedua, jika ditemukan elemen yang lebih besar dari elemen maksimum yang saat ini dipilih, maka indeks elemen tersebut disimpan sebagai indeks elemen maksimum.
Setelah iterasi kedua selesai, jika indeks elemen maksimum tidak sama dengan indeks elemen yang dipilih pada iterasi pertama, maka kedua elemen tersebut ditukar.
Proses ini diulang untuk setiap elemen hingga seluruh array terurut.

Hasil Output:
Sebelum diurutkan, array IPS memiliki nilai: {3.8, 2.9, 3.3, 4.0, 2.4}.
Setelah diurutkan dengan menggunakan algoritma selection sort, array IPS memiliki nilai: {4.0, 3.8, 3.3, 2.9, 2.4}.

### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menukar dua elemen
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan sorting menggunakan Bubble Sort
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Membandingkan dua string secara alfabetis
            if (arr[j] > arr[j+1]) {
                // Jika arr[j] lebih besar dari arr[j+1], swap
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    // Array of names
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names)/sizeof(names[0]);

    // Menampilkan nama sebelum diurutkan
    cout << "Nama sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    // Memanggil fungsi bubbleSort untuk mengurutkan nama
    bubbleSort(names, n);

    // Menampilkan nama setelah diurutkan
    cout << "Nama setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
```
##output
```Nama sebelum diurutkan: siti situ sana ana ani caca cici dida dodo dadi 
Nama setelah diurutkan: ana ani caca cici dadi dida dodo sana siti situ```


##penjelasan program dan hasil output

Program di atas adalah implementasi algoritma Bubble Sort untuk mengurutkan array string berisi nama. Berikut penjelasan dari program tersebut dan hasil outputnya:

Fungsi swap: Fungsi ini menerima dua string sebagai argumen dan menukar nilai keduanya.

Fungsi bubbleSort: Fungsi ini menerima array string arr dan panjang array n. Ini adalah implementasi algoritma Bubble Sort yang melakukan iterasi melalui array dan menukar elemen yang tidak terurut sampai seluruh array terurut.

Fungsi main():

Mendeklarasikan sebuah array names yang berisi nama-nama.
Mengeluarkan isi array names sebelum diurutkan.
Memanggil fungsi bubbleSort() untuk mengurutkan array names.
Mengeluarkan isi array names setelah diurutkan.
Proses Pengurutan:

Algoritma Bubble Sort bekerja dengan membandingkan dua elemen yang berdekatan dalam array dan menukarnya jika mereka tidak berada dalam urutan yang benar. Proses ini diulang sampai seluruh array terurut.

Hasil Output:
Sebelum diurutkan, array names memiliki nilai: {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"}.
Setelah diurutkan dengan menggunakan algoritma Bubble Sort, array names memiliki nilai: {"ana", "ani", "caca", "cici", "dadi", "dida", "dodo", "sana", "siti", "situ"}.

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)
```C++
#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai dua variabel
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk melakukan sorting secara ascending
void ascendingSort(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

// Fungsi untuk melakukan sorting secara descending
void descendingSort(char arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    char characters[n];

    cout << "Masukkan " << n << " karakter:\n";
    for (int i = 0; i < n; i++) {
        cin >> characters[i];
    }

    ascendingSort(characters, n);
    cout << "Hasil sorting ascending: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    descendingSort(characters, n);
    cout << "Hasil sorting descending: ";
    for (int i = 0; i < n; i++) {
        cout << characters[i] << " ";
    }
    cout << endl;

    return 0;
}

##output
```
Masukkan jumlah karakter: 5
Masukkan 5 karakter:
a,c,b,e,d
Hasil sorting ascending: a b c d e 
Hasil sorting descending: e d c b a
```
##Penjelasan Program
Program di atas adalah sebuah program C++ yang meminta pengguna untuk memasukkan sejumlah karakter, kemudian melakukan pengurutan karakter tersebut secara ascending dan descending menggunakan algoritma Bubble Sort. Berikut adalah penjelasan singkat dari program dan hasil outputnya:

Fungsi swap: Fungsi ini bertugas untuk menukar nilai dua variabel yang diberikan.
Fungsi ascendingSort: Fungsi ini mengurutkan array karakter secara ascending menggunakan algoritma Bubble Sort.
Fungsi descendingSort: Fungsi ini mengurutkan array karakter secara descending menggunakan algoritma Bubble Sort.
Fungsi main():
Meminta pengguna untuk memasukkan jumlah karakter yang akan diurutkan.
Membuat array characters berdasarkan jumlah karakter yang dimasukkan pengguna.
Meminta pengguna untuk memasukkan karakter-karakter tersebut.
Mengurutkan array karakter secara ascending menggunakan fungsi ascendingSort dan menampilkan hasilnya.
Mengurutkan array karakter secara descending menggunakan fungsi descendingSort dan menampilkan hasilnya.

Proses Pengurutan:
Kedua fungsi ascendingSort dan descendingSort menerapkan algoritma Bubble Sort. Algoritma ini membandingkan dua elemen berturut-turut dalam array dan menukarnya jika mereka tidak berada dalam urutan yang benar. Proses ini diulang sampai seluruh array terurut.

Hasil Output:
Pengguna diminta untuk memasukkan 5 karakter, misalnya: a, c, b, e, d.
Setelah diurutkan secara ascending, karakter-karakter tersebut menjadi: a, b, c, d, e.
Setelah diurutkan secara descending, karakter-karakter tersebut menjadi: e, d, c, b, a.

##kesimpulan
Pada modul ini kita belajar mengenai sorting, terutama pada bubble sorting dan insertion sorting. Bubble sorting yang mengacu pada teknik pengurutan yang biasanya digunakan untuk mengurutkan daftar kecil[1]. Dimulai dengan membandingkan item pertama dengan item kedua, item kedua dengan item ketiga dan seterusnya hingga menemukan satu item yang tidak berurutan. Kemudian menukar dua item dan memulai kembali. Lalu insertion sorting yang mengacu pada algoritma pengurutan sederhana yang membangun larik (atau daftar) yang diurutkan akhir satu per satu[1]. cara mengimplementasikan sorting, yaitu membuat program untuk mengurutkan Indeks Prestasi Mahasiswa dari terbesar hingga terkecil menggunakan selection sort, membuat program untuk mengurutkan 10 nama warga sesuai alfabet dengan menggunakan bubble sort, dan membuat program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)[1] Donald Knuth,The art of computer programming, volume 3: sorting and searching , Third Edition . Addison-Wesley, 1997
#references
[1] Wikipedia, the free encyclopedia. 2007. Tanggal akses: 11 April 2024 pukul 23.00 WIB

[2] Z. Ullah, “Understanding Sorting Techniques Using C++.” Sam Higginbottom Institute of Agriculture, Technology & Sciences, Allahabad, India, Apr. 2016
[3] Donald Knuth,The art of computer programming, volume 3: sorting and searching , Third Edition . Addison-Wesley, 1997
