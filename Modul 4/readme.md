# <h1 align="center">Laporan Praktikum Modul Algoritma searching</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
Pencarian (Searching) yaitu proses menemukan suatu nilai tertentu
pada kumpulan data. Hasil pencarian adalah salah satu dari tiga keadaan
ini: data ditemukan, data ditemukan lebih dari satu, atau data tidak
ditemukan. Searching juga dapat dianggap sebagai proses pencarian suatu
data di dalam sebuah array dengan cara mengecek satu persatu pada
setiap index baris atau setiap index kolomnya dengan menggunakan teknik
perulangan untuk melakukan pencarian data. Terdapat 2 metode pada
algoritma Searching, yaitu:

a. Sequential Search
Sequential Search merupakan salah satu algoritma pencarian data
yang biasa digunakan untuk data yang berpola acak atau belum terurut.
Sequential search juga merupakan teknik pencarian data dari array yang
paling mudah, dimana data dalam array dibaca satu demi satu dan
diurutkan dari index terkecil ke index terbesar, maupun sebaliknya. Konsep
Sequential Search yaitu:

• Membandingkan setiap elemen pada array satu per satu secara
berurut

• Proses pencarian dimulai dari indeks pertama hingga indeks terakhir
• Proses pencarian akan berhenti apabila data ditemukan. Jika hingga
akhir array data masih juga tidak ditemukan, maka proses pencarian
tetap akan dihentikan

• Proses perulangan pada pencarian akan terjadi sebanyak jumlah N
elemen pada arrayContoh dari Sequential Search, yaitu:
Array
Int A[8] = {9,1,5,2,7,6,11,3}


b. Binary Search
Binary Search termasuk ke dalam interval search, dimana algoritma
ini merupakan algoritma pencarian pada array/list dengan elemen terurut.
Pada metode ini, data harus diurutkan terlebih dahulu dengan cara data
dibagi menjadi dua bagian (secara logika), untuk setiap tahap pencarian.
Dalam penerapannya algoritma ini sering digabungkan dengan algoritmasorting karena data yang akan digunakan harus sudah terurut terlebih
dahulu. Konsep Binary Search:

• Data diambil dari posisi 1 sampai posisi akhir N

• Kemudian data akan dibagi menjadi dua untuk mendapatkan posisi
data tengah

• Selanjutnya data yang dicari akan dibandingkan dengan data yang
berada di posisi tengah, apakah lebih besar atau lebih kecil.

• Apabila data yang dicari lebih besar dari data tengah, maka dapat
dipastikan bahwa data yang dicari kemungkinan berada di sebelah
kanan dari data tengah. Proses pencarian selanjutnya akan
dilakukan pembagian data menjadi dua bagian pada bagian kanan
dengan acuan posisi data tengah akan menjadi posisi awal untuk
pembagian tersebut.

• Apabila data yang dicari lebih kecil dari data tengah, maka dapat
dipastikan bahwa data yang dicari kemungkinan berada di sebelah
kiri dari data tengah. Proses pencarian selanjutnya akan dilakukan
pembagian data menjadi dua bagian pada bagian kiri. Dengan acuan
posisi data tengah akan menjadi posisi akhir untuk pembagian
selanjutnya.

• Apabila data belum ditemukan, maka pencarian akan dilanjutkan
dengan kembali membagi data menjadi dua

• Namun apabila data bernilai sama, maka data yang dicari langsung
ditemukan dan pencarian dihentikan

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data
```#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++){
        if(data[i] == cari){
            ketemu = true;
            break;
        }
    }
        cout << "\t Program Sequential Search
    Sederhana\n" << endl;
        cout << " data: {9, 4, 1, 7, 5, 12, 4, 13, 4,
    10}"<< endl;
if (ketemu){
    cout << "\n angka "<< cari << " ditemukan pada
 indeks ke-" << i << endl;
} else {
    cout << cari << " tidak dapat ditemukan pada
data." << endl;
}
return 0;
```
### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search
```
  #include <iostream>
#include <iomanip>

using namespace std;

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(bil_data[j] < bil_data[min]) {
                min = j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binary_search() {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 6;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(bil_data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(bil_data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    if(b_flag == 1) {
        cout << "\n Data ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\n Data tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH\n";
    cout << "\n Data : ";
    // tampilkan data awal
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    cout << "\n Masukkan data yang ingin Anda cari : ";
    cin >> cari;
    cout << "\n Data diurutkan : ";
    // urutkan data dengan selection sort
    selection_sort();
    // tampilkan data setelah diurutkan
    for(int x = 0; x < 7; x++) {
        cout << setw(3) << bil_data[x];
    }
    cout << endl;
    binary_search();
    return 0;
}
```
## output
BINARY SEARCH

 Data :   1  8  2  5  4  9  7

   
## Unguided

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah
kalimat yang sudah di input dengan menggunakan Binary Search
```
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Fungsi untuk membersihkan tanda baca dari sebuah kata
string removePunctuation(const string& word) {
    string cleaned_word;
    for (char c : word) {
        if (isalnum(c) || c == '-') {
            cleaned_word += tolower(c);
        }
    }
    return cleaned_word;
}

// Fungsi untuk memisahkan kata dalam sebuah kalimat
vector<string> splitSentence(const string& sentence) {
    vector<string> words;
    string word = "";
    for (char c : sentence) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

// Fungsi untuk mencari kata dalam vector menggunakan binary search
bool searchWord(const vector<string>& words, const string& target) {
    int left = 0;
    int right = words.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (words[mid] == target) {
            return true;
        } else if (words[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    string sentence, target;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    cout << "Masukkan kata yang ingin dicari: ";
    cin >> target;

    // Memisahkan kalimat menjadi kata-kata, menghapus tanda baca, dan mengurutkannya secara alfabetis
    vector<string> words = splitSentence(sentence);
    sort(words.begin(), words.end());

    // Melakukan pencarian kata dalam kalimat menggunakan binary search
    bool found = searchWord(words, removePunctuation(target));

    if (found) {
        cout << "Kata '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Kata '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
```

## output
Masukkan sebuah kalimat: algoritma binary search adalah metode pencarian yang efisien dalam menemukan elemen array yang telah diurutkan    
Masukkan kata yang ingin dicari: metode
Kata 'metode' ditemukan dalam kalimat.

### 2.Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!
```
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah string
int hitungVokal(string kalimat) {
    int jumlahVokal = 0;
    for (char karakter : kalimat) {
        // Mengecek apakah karakter adalah huruf vokal (A/a, E/e, I/i, O/o, U/u)
        if (karakter == 'a' || karakter == 'A' || karakter == 'e' || karakter == 'E' ||
            karakter == 'i' || karakter == 'I' || karakter == 'o' || karakter == 'O' ||
            karakter == 'u' || karakter == 'U') {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = hitungVokal(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahVokal << endl;

    return 0;
}
```
## output
Masukkan sebuah kalimat: saya sedang belajar binary search
Jumlah huruf vokal dalam kalimat tersebut adalah: 11

### 3.Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!
```
#include <iostream>

using namespace std;

// Fungsi untuk mencari berapa kali angka 4 muncul dalam larik data
int sequentialSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    // Larik data yang diberikan
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]);

    // Angka yang akan dicari
    int key = 4;

    // Panggil fungsi sequentialSearch untuk mencari berapa kali angka 4 muncul
    int count = sequentialSearch(data, n, key);

    // Tampilkan hasil
    cout << "Jumlah kemunculan angka 4 dalam data: " << count << endl;

    return 0;
}
```
## output
Jumlah kemunculan angka 4 dalam data: 4
