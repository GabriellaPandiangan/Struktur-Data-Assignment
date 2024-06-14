# <h1 align="center">Laporan Praktikum Modul Rekursif Dan Has Table</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
Konsep Rekursif
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang
memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi.


Kode rekursif cenderung lebih singkat dan lebih mudah dibuat dibandingkan dengan kode iteratif. Biasanya, perulangan dapat diubah menjadi fungsi rekursif saat proses kompilasi atau interpretasi. Rekursi sangat efektif untuk menangani tugas yang dapat diuraikan menjadi sub tugas yang serupa. Sebagai contoh, masalah pengurutan, pencarian, dan penjelajahan sering kali dapat diselesaikan dengan solusi rekursif yang sederhana.

Jenis-jenis Rekursi
Terdapat dua jenis fungsi rekursi yaitu:
a. Rekursi langsung
Dalam rekursi langsung, fungsi memanggil dirinya sendiri secara langsung.
b. Rekursi tidak langsung
Jika sebuah fungsi memanggil dirinya sendiri secara tidak langsung dari fungsi lain.


Kelebihan :
1. Kode rekursif menyajikan solusi yang
mudah dimengerti dan bersih, meningkatkan kejelasan.
2. Rekursi terbukti efektif untuk
menangani masalah yang dapat diuraikan menjadi sub tugas-serupa,
seperti penjelajahan struktur data pohon.
3. Dalam beberapa kasus, solusi rekursif dapat memberikan kode yang lebih
elegan dan lebih kompak dibandingkan dengan pendekatan iteratif.

Kekurangan:
1. Efisiensi ruang menjadi masalah utama
dalam rekursi karena setiap panggilan
rekursif menambah overhead pada call
stack.
2. Beberapa implementasi rekursif
mungkin kurang efisien secara waktu,
terutama ketika terdapat overhead
pemanggilan fungsi.
3. Kesulitan dalam pemahaman konsep
rekursi oleh beberapa programmer
dapat memunculkan potensi bug dan
kompleksitas pemecahan masalah.

a. Pengertian Hash Table

Hash Table adalah struktur data yang mengorganisir data ke dalam pasangan
kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai kunci menjadi rentang indeks array.
Array menyimpan data dalam slot-slot yang disebut bucket. Setiap bucket
dapat menampung satu atau beberapa item data. Fungsi hash digunakan untuk
menghasilkan nilai unik dari setiap item data, yang digunakan sebagai indeks
array. Dengan cara ini, hash table memungkinkan pencarian data dalam waktu
yang konstan (O(1)) dalam kasus terbaik.
Sistem hash table bekerja dengan cara mengambil input kunci dan
memetakkannya ke nilai indeks array menggunakan fungsi hash. Kemudian, data
disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Ketika data perlu dicari, input kunci dijadikan sebagai parameter untuk fungsi hash, dan posisi indeks array yang dihasilkan digunakan untuk mencari data. Dalam kasus hash collision, di mana dua atau lebih data memiliki nilai hash yang sama, hash table menyimpan data tersebut dalam slot yang sama dengan Teknik yang disebut chaining.

b. Fungsi Hash Table

Fungsi hash membuat pemetaan antara kunci dan nilai, hal ini dilakukan
melalui penggunaan rumus matematika yang dikenal sebagai fungsi hash. Hasil
dari fungsi hash disebut sebagai nilai hash atau hash. Nilai hash adalah
representasi dari string karakter asli tetapi biasanya lebih kecil dari aslinya.


c. Operasi Hash Table

1. Insertion:
Memasukkan data baru ke dalam hash table dengan memanggil fungsi hash
untuk menentukan posisi bucket yang tepat, dan kemudian menambahkan
data ke bucket tersebut.
2. Deletion:
Menghapus data dari hash table dengan mencari data menggunakan fungsi
hash, dan kemudian menghapusnya dari bucket yang sesuai.
3. Searching:
Mencari data dalam hash table dengan memasukkan input kunci ke fungsi
hash untuk menentukan posisi bucket, dan kemudian mencari data di dalam
bucket yang sesuai.
4. Update:
Memperbarui data dalam hash table dengan mencari data menggunakan
fungsi hash, dan kemudian memperbarui data yang ditemukan.
5. Traversal:
Melalui seluruh hash table untuk memproses semua data yang ada dalam
tabel.

d. Collision Resolution

Keterbatasan tabel hash adalah jika dua angka dimasukkan ke dalam fungsi
hash menghasilkan nilai yang sama. Hal ini disebut dengan collision. Ada dua
teknik untuk menyelesaikan masalah ini diantaranya :

1. Open Hashing (Chaining)
   
Metode chaining mengatasi collision dengan cara menyimpan semua
item data dengan nilai indeks yang sama ke dalam sebuah linked list. Setiap
node pada linked list merepresentasikan satu item data. Ketika ada pencarian
atau penambahan item data, pencarian atau penambahan dilakukan pada
linked list yang sesuai dengan indeks yang telah dihitung dari kunci yang di
hash. Ketika linked list memiliki banyak node, pencarian atau penambahan
item data menjadi lambat, karena harus mencari di seluruh linked list.
Namun, chaining dapat mengatasi jumlah item data yang besar dengan
efektif, karena keterbatasan array dihindari.
3. Closed Hashing
   
● Linear Probing
Pada saat terjadi collision, maka akan mencari posisi yang kosong di
bawah tempat terjadinya collision, jika masih penuh terus ke bawah,
hingga ketemu tempat yang kosong. Jika tidak ada tempat yang kosong
berarti HashTable sudah penuh.

● Quadratic Probing
Penanganannya hampir sama dengan metode linear, hanya
lompatannya tidak satu-satu, tetapi quadratic ( 12, 22, 32, 42, ... )

● Double Hashing
Pada saat terjadi collision, terdapat fungsi hash yang kedua untuk
menentukan posisinya kembali.

## Guided 

### 1. Rekurisif Langsung (Direct Recurision)
```
#include <iostream>
using namespace std;

//Code ini berfungsi untuk melakukan hitung mundur
//dari angka yang diinputkan

void countdown(int n)
{
 if (n == 0) {
  cout << "Blastoff!" << endl; // Base case: print "Blastoff!" when n is 0
  return;
 }
 cout << n << " "; // Recursive case: print n and decrement n
 countdown(n - 1);
}

int main() {
 cout << "Rekursif Langsung: ";
 countdown(5); // 5 merupakan input nya
 cout << endl;
 return 0;
} 
```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'guided1.exe'
Rekursif Langsung: 5 4 3 2 1 
```
### 2. Rekursif Tidak Langsung
```
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
} 
void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}
int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
} 
```
## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'guided2.exe'
Rekursif Tidak Langsung: 5 4 2 1 
```

### 3. Hash Table
```
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
         int hash_val = 0;
         for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja
266, 300;
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);

        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }

    void remove(string name) {
    int hash_val = hashFunc(name);

        for (auto it = table[hash_val].begin(); it !=
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                 table[hash_val].erase(it);
                 return;
            }
        }
    }
string searchByName(string name) {
int hash_val = hashFunc(name);
for (auto node : table[hash_val]) {
    if (node->name == name) {
        return node->phone_number;
    }
}
return "";
}
void print() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << ": ";
            for (auto pair : table[i]) {
            if(pair != nullptr){
                cout << "[" << pair->name << ", " <<
pair->phone_number << "]";
                }           
            }
            cout << endl;
        }
    }
};

int main() {
HashMap employee_map;

employee_map.insert("Mistah", "1234");
employee_map.insert("Pastah", "5678");
employee_map.insert("Ghana", "91011");

cout << "Nomer Hp Mistah : " <<employee_map.searchByName("Mistah") <<
endl;
cout << "Phone Hp Pastah : " <<employee_map.searchByName("Pastah") <<
endl;
cout << "Phone Hp Ghana : " <<employee_map.searchByName("Ghana") <<
endl;

employee_map.remove("Mistah");

cout << "Nomer Hp Mistah setelah dihapus : "
<<employee_map.searchByName("Mistah") << endl << endl;\

cout << "Hash Table : " << endl;
employee_map.print();

return 0;
}
```
## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'guided3.exe'
Nomer Hp Mistah : 1234
Phone Hp Pastah : 5678
Phone Hp Ghana : 91011
Nomer Hp Mistah setelah dihapus : 

Hash Table : 
0: 
1:
2:
3:
4: [Pastah, 5678]
5:
6: [Ghana, 91011]
7:
8:
9: 
10:
```

## Unguided

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif! Contoh Output: Masukkan bilangan bulat positif: 5, Faktorial dari 5 adalah: 120
```
#include<iostream>
using namespace std;

long long faktorial(int n) {
    if(n > 1)
        return n * faktorial(n - 1);
    else
        return 1;
}

int main() {
    int num;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    cout << "Faktorial dari " << num << " adalah: " << faktorial(num) << endl;
    return 0;
}
```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'unguided1.exe'
Masukkan bilangan bulat positif: 5
Faktorial dari 5 adalah: 120
```
## penjelasan program
Program dimulai dengan mendefinisikan fungsi faktorial(int n) yang mengambil bilangan bulat n sebagai argumen dan mengembalikan nilai faktorial dari n. Fungsi ini menggunakan pendekatan rekursif untuk menghitung faktorial.

Di dalam fungsi faktorial(int n), jika n lebih besar dari 1, maka faktorial dihitung dengan cara mengalikan n dengan hasil faktorial dari n - 1. Ini dilakukan secara rekursif sampai mencapai basis kasus saat n adalah 1, di mana hasil faktorialnya adalah 1.

Fungsi main() meminta pengguna untuk memasukkan sebuah bilangan bulat positif, kemudian memanggil fungsi faktorial() untuk menghitung faktorial dari bilangan tersebut, dan akhirnya mencetak hasilnya.

Hasil Output:
Pengguna diminta untuk memasukkan sebuah bilangan bulat positif.
Pengguna memasukkan angka 5.
Program menghitung faktorial dari 5, yaitu 5 x 4 x 3 x 2 x 1 = 120.
Hasil faktorial, yaitu 120, dicetak ke layar.

### 2.Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas
```
#include <iostream>

unsigned long long helper(int n, int result) {
    if (n == 0 || n == 1) {
        return result;
    } else {
        return helper(n - 1, n * result);
    }
}

unsigned long long factorial(int n) {
    return helper(n, 1);
}

int main() {
    int num;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> num;
    std::cout << "Faktorial dari " << num << " adalah: " << factorial(num) << std::endl;
    return 0;
}
```
## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'unguided2.exe'
Masukkan bilangan bulat positif: 5
Faktorial dari 5 adalah: 120
```
## penjelasan
Program ini memiliki dua fungsi utama: helper(int n, int result) dan factorial(int n).

Fungsi helper(int n, int result) merupakan sebuah fungsi bantuan yang menggunakan pendekatan rekursif untuk menghitung faktorial. Fungsi ini mengambil dua parameter: n sebagai bilangan bulat yang akan dihitung faktorialnya, dan result sebagai hasil perkalian yang terakumulasi selama rekursi.

Jika n sama dengan 0 atau 1, maka hasil terakumulasi (result) akan dikembalikan. Ini adalah basis kasus dari rekursi.

Jika n bukan 0 atau 1, maka fungsi akan memanggil dirinya sendiri dengan mengurangi n sebesar 1 dan mengalikan result dengan n. Proses ini akan terus berulang hingga mencapai basis kasus.

Fungsi factorial(int n) adalah fungsi utama yang dipanggil dari main(). Fungsi ini hanya memanggil helper() dengan result awal 1.

Di dalam main(), pengguna diminta untuk memasukkan sebuah bilangan bulat positif, kemudian program akan menghitung faktorial dari bilangan tersebut menggunakan fungsi factorial() dan mencetak hasilnya.

Hasil Output:
Pengguna diminta untuk memasukkan sebuah bilangan bulat positif.
Pengguna memasukkan angka 5.
Program menghitung faktorial dari 5, yaitu 5 x 4 x 3 x 2 x 1 = 120.
Hasil faktorial, yaitu 120, dicetak ke layar.

### 3
```
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;

class HashNode {
public:
    string nim;
    int nilai;

    HashNode(string nim, int nilai) {
        this->nim = nim;
        this->nilai = nilai;
    }
};

class HashTable {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
        return hash_val % TABLE_SIZE;
    }

    void insert(string nim, int nilai) {
        int hash_val = hashFunc(nim);

        for (auto node : table[hash_val]) {
            if (node->nim == nim) {
                node->nilai = nilai;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(nim, nilai));
    }

    void remove(string nim) {
        int hash_val = hashFunc(nim);

        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->nim == nim) {
                table[hash_val].erase(it);
                return;
            }
        }
    }

    int searchByNim(string nim) {
        int hash_val = hashFunc(nim);
        for (auto node : table[hash_val]) {
            if (node->nim == nim) {
                return node->nilai;
            }
        }
        return -1; // not found
    }

    void searchByNilai(int nilaiAwal, int nilaiAkhir) {
        for (int i = 0; i < TABLE_SIZE; i++) {
            for (auto node : table[i]) {
                if (node->nilai >= nilaiAwal && node->nilai <= nilaiAkhir) {
                    cout << "NIM: " << node->nim << ", Nilai: " << node->nilai << endl;
                }
            }
        }
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->nim << ", " << pair->nilai << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashTable student_table;

    student_table.insert("12345", 80);
    student_table.insert("67890", 90);
    student_table.insert("11111", 85);

    cout << "Nilai 12345: " << student_table.searchByNim("12345") << endl;
    cout << "Nilai 67890: " << student_table.searchByNim("67890") << endl;
    cout << "Nilai 11111: " << student_table.searchByNim("11111") << endl;

    student_table.remove("12345");

    cout << "Nilai 12345 setelah dihapus: " << student_table.searchByNim("12345") << endl << endl;

    cout << "Cari nilai antara 80-90: " << endl;
    student_table.searchByNilai(80, 90);

    cout << "Hash Table: " << endl;
    student_table.print();

    return 0;
}
```
## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 9\output> & .\'unguided3.exe'
Nilai 12345: 80
Nilai 67890: 90
Nilai 11111: 85
Nilai 12345 setelah dihapus: -1

Cari nilai antara 80-90: 
NIM: 11111, Nilai: 85
NIM: 67890, Nilai: 90
Hash Table:
0:
1:
2:
3: [11111, 85]
4:
5:
6: [67890, 90]
7:
8:
9:
10:
```
## penjelasan
Program ini mengimplementasikan  dari tabel hash (hash table) menggunakan chaining untuk menangani tabrakan (collision)

Penjelasan Program:
Kelas HashNode digunakan untuk merepresentasikan node dalam tabel hash. Setiap HashNode memiliki dua atribut: nim untuk menyimpan NIM mahasiswa dan nilai untuk menyimpan nilai mahasiswa.

Kelas HashTable memiliki beberapa fungsi untuk mengelola tabel hash, antara lain:

hashFunc(string key): Menghitung hash value dari sebuah string key dengan menjumlahkan nilai ASCII dari setiap karakter dan kemudian mengambil sisa hasil bagi terhadap ukuran tabel (TABLE_SIZE).
insert(string nim, int nilai): Memasukkan data ke dalam tabel hash. Jika terjadi tabrakan, data akan dimasukkan ke dalam linked list yang terdapat di indeks yang sama.
remove(string nim): Menghapus data dari tabel hash berdasarkan NIM mahasiswa.
searchByNim(string nim): Mencari nilai mahasiswa berdasarkan NIM.
searchByNilai(int nilaiAwal, int nilaiAkhir): Mencari data mahasiswa berdasarkan rentang nilai.
print(): Mencetak isi dari tabel hash.
Di dalam main(), beberapa operasi dilakukan:

Beberapa data mahasiswa dimasukkan ke dalam tabel hash menggunakan insert().
Nilai mahasiswa dicari menggunakan searchByNim().
Salah satu data mahasiswa dihapus menggunakan remove().
Data mahasiswa dengan nilai dalam rentang tertentu dicari menggunakan searchByNilai().
Isi dari tabel hash dicetak menggunakan print().


Hasil Output:
Tiga data mahasiswa dimasukkan ke dalam tabel hash.
Nilai dari beberapa NIM diprint menggunakan searchByNim().
Salah satu data mahasiswa dengan NIM "12345" dihapus.
Data mahasiswa dengan nilai antara 80 hingga 90 dicari dan diprint menggunakan searchByNilai().
Isi dari tabel hash diprint menggunakan print(). Terlihat bahwa terdapat tabrakan yang diatasi dengan chaining, di mana beberapa HashNode tersimpan dalam linked list pada indeks yang sama.

## kesimpulan
Rekursif merupakan salah satu proses pengulangan fungsi atau prosedur yang memanggil dirinya sendiri. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali. Terdapat dua jenis fungsi rekursi yaitu rekursi langsung dan rekursi tidak langsung. Lalu hashtable adalah struktur data yang mengorganisir data ke dalam pasangan kunci-nilai. Hash table biasanya terdiri dari dua komponen utama: array (atau vektor) dan fungsi hash. Hashing adalah teknik untuk mengubah rentang nilai kunci menjadi rentang indeks array. Dan pada modul ini kita dapat mengetahui mengenai membuat program rekursif langsung dan tidak langsung serta mengimplementasikan hashtable untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai.

## references
[1] Mailund, T. (2019). The Joys of Hashing: Hash Table Programming with C. Apress.
[2] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts, problems, Interview Questions. CareerMonk Publications.
