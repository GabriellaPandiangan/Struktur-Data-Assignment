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

//output
Nama sebelum diurutkan: siti situ sana ana ani caca cici dida dodo dadi 
Nama setelah diurutkan: ana ani caca cici dadi dida dodo sana siti situ

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

//output
Masukkan jumlah karakter: 5
Masukkan 5 karakter:
a,c,b,e,d
Hasil sorting ascending: a b c d e 
Hasil sorting descending: e d c b a
