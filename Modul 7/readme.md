# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
STACK

Stack adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip
dengan Linked Lists). Dalam tumpukan, urutan kedatangan data penting. Sebuah
tumpukan piring di kafetaria adalah contoh bagus dari tumpukan. Piring
ditambahkan ke tumpukan saat mereka dibersihkan dan ditempatkan di bagian
atas. Ketika sebuah piring dibutuhkan, diambil dari bagian atas tumpukan. Piring
pertama yang ditempatkan di tumpukan adalah yang terakhir digunakan.
Definisi: Sebuah tumpukan adalah daftar terurut di mana penyisipan dan
penghapusan dilakukan di satu ujung, disebut atas. Elemen terakhir yang
dimasukkan adalah yang pertama dihapus. Oleh karena itu, disebut daftar Last in
First out (LIFO).
Operasi pada stack melibatkan beberapa fungsi dasar yang dapat dilakukan pada
struktur data ini. Berikut adalah beberapa operasi umum pada stack:
a. Push (Masukkan): Menambahkan elemen ke dalam tumpukan pada posisi paling
atas atau ujung.
b. Pop (Keluarkan): Menghapus elemen dari posisi paling atas atau ujung tumpukan.
c. Top (Atas): Mendapatkan nilai atau melihat elemen teratas pada tumpukan tanpa
menghapusnya.
d. IsEmpty (Kosong): Memeriksa apakah tumpukan kosong atau tidak.
e. IsFull (Penuh): Memeriksa apakah tumpukan penuh atau tidak (terutama pada
implementasi tumpukan dengan kapasitas terbatas).
f. Size (Ukuran): Mengembalikan jumlah elemen yang ada dalam tumpukan.
g. Peek (Lihat): Melihat nilai atau elemen pada posisi tertentu dalam tumpukan
tanpa menghapusnya.
h. Clear (Hapus Semua): Mengosongkan atau menghapus semua elemen dari
tumpukan.
i. Search (Cari): Mencari keberadaan elemen tertentu dalam tumpukan.


QUEUE

Queue adalah struktur data yang digunakan untuk menyimpan data dengan metode
FIFO (First-In First-Out). Data yang pertama dimasukkan ke dalam queue akan
menjadi data yang pertama pula untuk dikeluarkan dari queue. Queue mirip dengan
konsep antrian pada kehidupan sehari-hari, dimana konsumen yang datang lebih
dulu akan dilayani terlebih dahulu.
Implementasi queue dapat dilakukan dengan menggunakan array atau linked list.
Struktur data queue terdiri dari dua pointer yaitu front dan rear. Front/head adalah
pointer ke elemen pertama dalam queue dan rear/tail/back adalah pointer ke elemen
terakhir dalam queue.

Perbedaan antara stack dan queue terdapat pada aturan penambahan dan
penghapusan elemen. Pada stack, operasi penambahan dan penghapusan elemen
dilakukan di satu ujung. Elemen yang terakhir diinputkan akan berada paling dengan
dengan ujung atau dianggap paling atas sehingga pada operasi penghapusan, elemen
teratas tersebut akan dihapus paling awal, sifat demikian dikenal dengan LIFO.
Pada Queue, operasi tersebut dilakukan ditempat berbeda (melalui salah satu ujung)
karena perubahan data selalu mengacu pada Head, maka hanya ada 1 jenis insert
maupun delete. Prosedur ini sering disebut Enqueue dan Dequeue pada kasus Queue.
Untuk Enqueue, cukup tambahkan elemen setelah elemen terakhir Queue, dan untuk
Dequeue, cukup "geser"kan Head menjadi elemen selanjutnya.
Operasi pada Queue
1. enqueue() : menambahkan data ke dalam queue.
2. dequeue() : mengeluarkan data dari queue.
3. peek() : mengambil data dari queue tanpa menghapusnya.
4. isEmpty() : mengecek apakah queue kosong atau tidak.
5. isFull() : mengecek apakah queue penuh atau tidak.
6. size() : menghitung jumlah elemen dalam queue.

## Guided 

### 1. Sourcecode
```
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```

## hasil output
```
l 7\output> & .\'guided1.exe'
Inggris
Dasar Multimedia
Matematika Diskrit
Struktur Data
Kalkulus

Apakah data stack penuh? 1
Apakah data stack kosong? 0        
Posisi ke 2 adalah Dasar Multimedia
Banyaknya data = 4

Dasar Multimedia
Bahasa Jerman
Struktur Data
Kalkulus

Jumlah data setelah dihapus: 0     
Tidak ada data yang dicetak        
PS D:\Struktur-Data-Assignment\Modul 7\output>
```

### 2. 
```
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
## hasil output
```
7\output> & .\'guided2.exe'
Data antrian teller:
1. Andi
2. Maya
3. (kosong)
4. (kosong)
5. (kosong)
Jumlah antrian = 2
Data antrian teller:
1. Maya
2. (kosong)
3. (kosong)
4. (kosong)
5. (kosong)
Jumlah antrian = 1
Data antrian teller:
1. (kosong)
2. (kosong)
3. (kosong)
4. (kosong)
5. (kosong)
Jumlah antrian = 0
PS D:\Struktur-Data-Assignment\Modul 7\output>
```

## Unguided

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya. contoh kalimat: ini. Kalimat tersebut adalah polindrom, Kalimat: telkom. Kalimat tersebut bukan polindrom. Masukkan kalimat: ini. Kalimat tersebut adalah polindrom. 
```
#include <iostream>
#include <string>
#include <stack>

bool isPalindrom(std::string word) {
    std::stack<char> s;
    std::string reversedWord = "";

    // Push all characters of the word to the stack
    for (char c : word) {
        s.push(c);
    }

    // Pop all characters from the stack and construct the reversed word
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }

    // Check if the word and the reversed word are the same
    if (word == reversedWord) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);

    if (isPalindrom(input)) {
        std::cout << "Kalimat tersebut adalah palindrom." << std::endl;
    } else {
        std::cout << "Kalimat tersebut bukan palindrom." << std::endl;
    }

    return 0;
}
```

## hasil output
```
7\output> & .\'unguided1.exe'
Masukkan kalimat: ini 
Kalimat tersebut adalah palindrom.
PS D:\Struktur-Data-Assignment\Modul 7\output> 
```
## penjelasan
program yang bertujuan untuk mengecek apakah sebuah kalimat yang dimasukkan oleh pengguna merupakan palindrom atau tidak. Sebuah palindrom adalah suatu kata, frasa, angka, atau urutan lainnya yang sama jika dibaca dari depan maupun dari belakang.

Di dalam program ini:

Fungsi isPalindrom menerima sebuah string sebagai argumen dan mengembalikan nilai boolean yang menunjukkan apakah string tersebut merupakan palindrom atau tidak.
Dalam fungsi isPalindrom, setiap karakter dari string dimasukkan ke dalam sebuah stack.
Karakter-karakter tersebut kemudian dipop dari stack satu per satu, dan disusun ke dalam sebuah string reversedWord.
Setelah semua karakter dipop dan disusun, string word dan reversedWord dibandingkan. Jika keduanya sama, maka fungsi mengembalikan true, menunjukkan bahwa string tersebut merupakan palindrom. Jika tidak sama, fungsi mengembalikan false.
Di dalam fungsi main, pengguna diminta untuk memasukkan sebuah kalimat.
Kalimat tersebut kemudian dimasukkan ke fungsi isPalindrom untuk diperiksa apakah merupakan palindrom atau tidak.
Hasil dari pemeriksaan ditampilkan kepada pengguna.

Output yang diberikan dalam hasil di atas menunjukkan bahwa kata "ini" merupakan palindrom, karena jika dibaca dari depan atau belakang, hasilnya tetap sama.

### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu.
```
#include <iostream>
#include <string>
#include <stack>

bool isPalindrom(std::string kalimat) {
    std::stack<char> stack;
    std::string kalimatTerbalik = "";

    // Push all characters of the word to the stack
    for (char c : kalimat) {
        stack.push(c);
    }

    // Pop all characters from the stack and construct the reversed word
    while (!stack.empty()) {
        kalimatTerbalik += stack.top();
        stack.pop();
    }

    // Check if the word and the reversed word are the same
    if (kalimat == kalimatTerbalik) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int pilihan;
    std::string kalimat;

    while (true) {
        std::cout << "Pilih menu:\n";
        std::cout << "1. Cek apakah kalimat adalah palindrom\n";
        std::cout << "2. Keluar\n";
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        if (pilihan == 1) {
            std::cout << "Masukkan kalimat: ";
            std::cin.ignore();
            std::getline(std::cin, kalimat);

            if (isPalindrom(kalimat)) {
                std::cout << "Kalimat ini adalah palindrom.\n";
            } else {
                std::cout << "Kalimat ini bukan palindrom.\n";
            }
        } else if (pilihan == 2) {
            break;
        } else {
            std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}
```
## hasil output
Pilih menu:
1. Cek apakah kalimat adalah palindrom
2. Keluar
Pilihan: 1
Masukkan kalimat: ada
Kalimat ini adalah palindrom.

## penjelasan
 program yang memungkinkan pengguna untuk memeriksa apakah sebuah kalimat yang dimasukkan merupakan palindrom atau tidak. Program ini juga memberikan opsi kepada pengguna untuk keluar dari program.

Di dalam program ini:

Fungsi isPalindrom menerima sebuah string sebagai argumen dan mengembalikan nilai boolean yang menunjukkan apakah string tersebut merupakan palindrom atau tidak. Fungsinya sama dengan program sebelumnya.
Di dalam fungsi main, terdapat sebuah loop while(true) yang membuat program terus berjalan sampai pengguna memilih opsi untuk keluar.
Pengguna diberikan opsi untuk memilih menu:
Memeriksa apakah sebuah kalimat adalah palindrom.
Keluar dari program.
Jika pengguna memilih menu untuk memeriksa palindrom, mereka diminta untuk memasukkan kalimat.
Kalimat tersebut kemudian dimasukkan ke fungsi isPalindrom untuk diperiksa apakah merupakan palindrom atau tidak.
Hasil dari pemeriksaan ditampilkan kepada pengguna.
Jika pengguna memilih untuk keluar, program akan berhenti.

Output akan memberikan informasi apakah kalimat yang dimasukkan oleh pengguna merupakan palindrom atau tidak. Jika kalimat adalah palindrom, maka program akan memberikan pesan "Kalimat ini adalah palindrom.", dan sebaliknya jika bukan palindrom, maka program akan memberikan pesan "Kalimat ini bukan palindrom."

## kesimpulan
Pada modul imi mengetahui tentang stack dan queue. Stack adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip dengan Linked Lists). Dalam tumpukan, urutan kedatangan data penting, sedangkan queue adalah struktur data yang digunakan untuk menyimpan data dengan metode FIFO (First-In First-Out). Data yang pertama dimasukkan ke dalam queue akan menjadi data yang pertama pula untuk dikeluarkan dari queue. Perbedaan antara stack dan queue terdapat pada aturan penambahan dan penghapusan elemen. Pada stack, operasi penambahan dan penghapusan elemen dilakukan di satu ujung. Elemen yang terakhir diinputkan akan berada paling dengan dengan ujung atau dianggap paling atas sehingga pada operasi penghapusan, elemen teratas tersebut akan dihapus paling awal, sifat demikian dikenal dengan LIFO. Pada Queue, operasi tersebut dilakukan ditempat berbeda (melalui salah satu ujung) karena perubahan data selalu mengacu pada Head, maka hanya ada 1 jenis insert maupun delete. Prosedur ini sering disebut Enqueue dan Dequeue pada kasus Queue. Untuk Enqueue, cukup tambahkan elemen setelah elemen terakhir Queue, dan untuk Dequeue, cukup "geser"kan Head menjadi elemen selanjutnya dan pada program ini kita membuat program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak dan mengubah guided queue agar menjadi program inputan user dan program menu.
