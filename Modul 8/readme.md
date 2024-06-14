# <h1 align="center">Laporan Praktikum Modul PRIORITY QUEUE DAN HEAPS</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai
prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil sebelum elemen dengan nilai prioritas lebih rendah.

Dalam priority queue, setiap elemen memiliki nilai prioritas yang terkait dengannya. Ketika menambahkan elemen ke antrian, elemen tersebut dimasukkan ke dalam posisi berdasarkan nilai prioritasnya. Misalnya, jika menambahkan elemen dengan nilai prioritas tinggi ke priority queue, elemen tersebut mungkin dimasukkan di dekat bagian depan antrian, sementara elemen dengan nilai prioritas rendah mungkin dimasukkan di dekat bagian belakang.

Ada beberapa cara untuk mengimplementasikan priority queue, termasuk
menggunakan array, linked list, heap, atau binary search tree. Setiap metode memiliki kelebihan dan kekurangannya sendiri, dan pilihan terbaik akan tergantung pada kebutuhan spesifik aplikasi.
Priority queue sering digunakan dalam sistem real-time, di mana urutan pemrosesan elemen dapat memiliki konsekuensi yang signifikan. Selain itu, priority queue juga digunakan dalam algoritma untuk meningkatkan efisiensi, seperti algoritma Dijkstra untuk menemukan jalur terpendek dalam grafik dan algoritma pencarian A* untuk pencarian jalur.

Heap dalam struktur data adalah struktur berbasis pohon biner (binary tree) dengan aturan tertentu. Heap memiliki beberapa ciri khas yang membedakannya dari pohon binary biasa, yaitu:
Complete Binary Tree: Heap harus berbentuk complete binary tree, di mana
setiap levelnya terisi penuh kecuali level paling bawah. Level paling bawah
pun harus terisi dari kiri ke kanan.
Order Property: Heap bisa dibagi menjadi dua jenis, yaitu max-heap dan
min-heap.
Max-heap: pada setiap node, nilai orang tua (parent) harus lebih besar atau
sama dengan nilai anaknya (children).
Min-heap: pada setiap node, nilai orang tua harus lebih kecil atau sama
dengan nilai anaknya.
Dengan aturan ini, nilai terbesar (max-heap) atau terkecil (min-heap) akan selalu berada di node paling atas (root). Heap sering digunakan untuk algoritma sorting seperti heap sort dan juga untuk priority queue.
Heap memiliki kelebihan dalam hal kecepatan operasi. Menambah atau menghapus
elemen dalam heap hanya membutuhkan waktu O(log N), sedangkan mencari elemen
minimum/maksimum hanya membutuhkan waktu konstan O(1



## Guided 

### 1. 
```
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }

}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    insert(45);
    insert(20);
    insert(14);
    insert(12);
    insert(31);
    insert(7);
    insert(11);
    insert(13);
    insert(7);
    
    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    
    std::cout << "Node with maximum priority : " << extractMax()
<< "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    changePriority(2, 49);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

remove(3);
std::cout << "Priority queue after removing the element : ";
for (int i = 0; i <= heapSize; ++i) {
    std::cout << H[i] << " ";
    }
    return 0;
}   
```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 8> cd 'd:\Struktur-Data-Assignment\Modul 8\output'
PS D:\Struktur-Data-Assignment\Modul 8\output> & .\'guided1.exe'
Priority Queue : 45 31 14 13 20 7 11 12 7 
Node with maximum priority : 45
Priority queue after extracting maximum : 31 20 14 13 7 7 11 12 
Priority queue after priority change : 49 20 31 13 7 7 11 12 
Priority queue after removing the element : 49 20 31 12 7 7 11 
PS D:\Struktur-Data-Assignment\Modul 8\output>
```

## Unguided

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user
```
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return ((2 * i) + 1);
}

int rightChild(int i) {
    return ((2 * i) + 2);
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

int main() {
    int n;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        std::cout << "Masukkan elemen ke-" << (i+1) << ": ";
        std::cin >> x;
        insert(x);
    }
    
    std::cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";
    
    std::cout << "Node with maximum priority : " << extractMax() << "\n";

    std::cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int idx, p;
    std::cout << "Masukkan indeks dan prioritas baru: ";
    std::cin >> idx >> p;
    changePriority(idx, p);
    std::cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Masukkan indeks elemen yang akan dihapus: ";
    std::cin >> idx;
    remove(idx);
    std::cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    return 0;
}
```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 8> cd "d:\Struktur-Data-Assignment\Modul 8\" ; if ($?) { g++ unguided1.cpp -o guided1 } ; if ($?) { .\unguided1 }
Masukkan jumlah elemen: 5
Masukkan elemen ke-1: 1
Masukkan elemen ke-2: 2
Masukkan elemen ke-3: 3
Masukkan elemen ke-4: 4
Masukkan elemen ke-5: 5
Priority Queue : 5 4 2 1 3 
Node with maximum priority : 5
Priority queue after extracting maximum : 4 3 2 1 
Masukkan indeks dan prioritas baru:
```
## penjelasan
Program ini adalah implementasi dari struktur data priority queue menggunakan heap (binary max-heap).
fungsi dari setiap program :

Include Libraries: Program mengimpor pustaka iostream untuk masukan/keluaran standar dan pustaka algorithm untuk menggunakan fungsi swap.

Deklarasi Variabel Global:

H[50]: array untuk menyimpan elemen heap.
heapSize: menyimpan ukuran heap saat ini.

Fungsi-fungsi Dasar Heap:

parent(i), leftChild(i), rightChild(i): Mengembalikan indeks parent, left child, dan right child dari sebuah node.
shiftUp(i): Mendorong elemen ke atas dalam heap untuk memperbaiki properti heap setelah penambahan elemen.
shiftDown(i): Mendorong elemen ke bawah dalam heap untuk memperbaiki properti heap setelah penghapusan elemen.

Operasi-operasi Heap:

insert(p): Memasukkan elemen baru p ke dalam heap dan memperbaiki properti heap dengan memanggil shiftUp.
extractMax(): Menghapus dan mengembalikan elemen terbesar (root) dari heap, lalu memperbaiki heap menggunakan shiftDown.
changePriority(i, p): Mengubah prioritas elemen pada indeks i menjadi p, lalu memperbaiki heap dengan memanggil shiftUp atau shiftDown tergantung pada kenaikan atau penurunan prioritas.
getMax(): Mengembalikan nilai elemen terbesar (root) dari heap.
remove(i): Menghapus elemen pada indeks i dengan menetapkan nilai elemen tersebut menjadi lebih besar dari elemen terbesar di heap, lalu memanggil shiftUp dan extractMax untuk memperbaiki heap.

Fungsi main:

Meminta pengguna memasukkan jumlah elemen dan elemen-elemen tersebut.
Memasukkan elemen-elemen ke dalam heap menggunakan insert.
Menampilkan isi priority queue sebelum dan setelah operasi extractMax, changePriority, dan remove.
Hasil Output:

Pengguna diminta untuk memasukkan jumlah elemen dan elemen-elemen.
Priority queue awal ditampilkan.
Nilai elemen dengan prioritas tertinggi diekstrak dan ditampilkan.
Priority queue setelah penghapusan elemen tertinggi ditampilkan.
Pengguna diminta untuk memasukkan indeks elemen dan prioritas baru untuk mengubah prioritas sebuah elemen.
Priority queue setelah perubahan prioritas ditampilkan.
Pengguna diminta untuk memasukkan indeks elemen yang akan dihapus.
Priority queue setelah penghapusan elemen ditampilkan.
Hasil output menunjukkan bahwa program bekerja sesuai yang diharapkan, menunjukkan operasi-operasi dasar pada priority queue menggunakan heap.

## kesimpulan
Pada modul ini kita belajar mengenai priority queue dan heap. Priority queue adalah jenis queue yang mengatur elemen berdasarkan nilai prioritasnya. Elemen dengan nilai prioritas lebih tinggi umumnya akan diambil sebelum elemen dengan nilai prioritas lebih rendah. Lalu untuk heap dalam struktur data adalah struktur berbasis pohon biner (binary tree) dengan aturan tertentu. Heap memiliki kelebihan dalam hal kecepatan operasi. Menambah atau menghapus elemen dalam heap hanya membutuhkan waktu O(log N), sedangkan mencari elemen minimum/maksimum hanya membutuhkan waktu konstan O(1) sehingga kita dapat memodifikasi guided yang mana heap di konstruksikan secara manual oleh user.

## references
[1] B. V. Cherkassky and A. V. Goldberg, Heap‐on‐Top Priority Queues, Tech. report 96‐4, NEC Research Institute, Princeton, NJ, 1996
[2] Goodrich, Tamassia, Mount. Data Structure and Algorithms in C++, Wiley, 2004
