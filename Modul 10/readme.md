# <h1 align="center">Laporan Praktikum Modul GRAPH DAN TREE</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
1. GRAPH
Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan
hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Graf terdiri dari simpul dan busur yang secara matematis dinyatakan sebagai :
G = (V, E)
Dimana G adalah Graph, V adalah simpul atau vertex dan E sebagai sisi atau edge.
Graph dapat digunakan dalam berbagai aplikasi, seperti jaringan sosial, pemetaan Jalan, dan pemodelan data.

## JENIS-JENIS GRAPH
a. Graph berarah (directed graph): Urutan simpul mempunyai arti. Misal busur AB
adalah e1 sedangkan busur BA adalah e8.
b. Graph tak berarah (undirected graph): Urutan simpul dalam sebuah busur
tidak diperhatikan. Misal busur e1 dapat disebut busur AB atau BA.
c. Weight Graph : Graph yang mempunyai nilai pada tiap edgenya

2. TREE atau POHON 
Dalam ilmu komputer, pohon/tree adalah struktur data yang sangat umum dan kuat
yang menyerupai nyata pohon. Ini terdiri dari satu set node tertaut yang terurut dalam grafik yang terhubung, dimana setiap node memiliki paling banyak satu simpul induk, dan nol atau lebih simpul anak dengan urutan tertentu. Struktur data
tree digunakan untuk menyimpan data-data hirarki seperti pohon keluarga, skema pertandingan, struktur organisasi.
istilah dalam struktur data dapat ditulis sebagai berikut:
Predecessor: Node yang berada diaatas node tertentu.
Successor: Node yang berada dibawah node tertentu.
Ancestor: Seluruh node yang terletak sebelum node tertentu dan terletak pada jalur yang sama.
Descendent: Seluruh node yang terletak setelah node tertentu dan terletak pada jalur yang sama.
Parent: Predecessor satu level diatas suatu node.
Child: Successor satu level dibawah suatu node.
Sibling: Node-node yang memiliki parent yang sama.
Subtree: Suatu node beserta descendent-nya
Size: Banyaknya tingkatan/level dalam bentuk suatu tree
Height: Banyaknya tingkatan/level dalam suatu tree
Roof: Node khusus yang tidak memiliki predecessor
Leaf: Node-node dalam tree yang tidak memiliki successor
Degree: Banyaknya child dalam suatu node

Binary tree atau pohon biner merupakan struktur data pohon akan tetapi setiap simpul dalam pohon diprasyaratkan memiliki simpul satu level di bawahnya (child)tidak lebih dari 2 simpul, artinya jumlah child yang diperbolehkan yakni 0, 1, dan 2.

a. Create: digunakan untuk membentuk binary tree baru yang masih kosong.
b. Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau
menghapus semua node pada binary tree.
c. isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau
tidak.
d. Insert: digunakan untuk memasukkan sebuah node kedalam tree.
e. Find: digunakan untuk mencari root, parent, left child, atau right child dari
suatu node dengan syarat tree tidak boleh kosong.
f. Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer
current dengan syarat tree tidak boleh kosong.g. Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer
current dengan syarat tree tidak boleh kosong.
h. Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh
descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh
kosong.
i. Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree.
Yakni size, height, serta average lenght-nya.
j. Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan
cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini
yakni Pre-Order, In-Order, dan Post-Order.
1. Pre-Order
Penelusuran secara pre-order memiliki alur:
a. Cetak data pada simpul root
b. Secara rekursif mencetak seluruh data pada subpohon kiri
c. Secara rekursif mencetak seluruh data pada subpohon
kanan Dapat kita turunkan rumus penelusuran menjadi: root(print)-kiri-kanan
roP-Ki-Ka

2. In-OrderPenelusuran secara in-order memiliki alur:
a. Secara rekursif mencetak seluruh data pada subpohon kiri
b. Cetak data pada root
c. Secara rekursif mencetak seluruh data pada subpohon
kanan Dapat kita turunkan rumus penelusuran menjadi:
Kiri-Root-Kanan
Ki-Ro-Ka

3. Post Order
Penelusuran secara in-order memiliki alur:
a. Secara rekursif mencetak seluruh data pada subpohon kiri
b. Secara rekursif mencetak seluruh data pada subpohon kanan
c. Cetak data pada root
Dapat kita turunkan rumus penelusuran menjadi:
Kiri-Kanan-Root
Ki-Ka-Ro
atau
Root-Kiri-Kanan(print)
Ro-Ki-KaP


## Guided 

### 1. Program Graph
```
#include <iostream>
#include <iomanip> // corrected from <iomannip>
using namespace std;

string simpul[7] = {"Ciamis",
                    "Bandung",
                    "Bekasi",
                    "Tasikmalaya",
                    "Cianjur",
                    "Purwokerto",
                    "Yogyakarta"};

int busur [7] [7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 9, 15, 0},
    {0, 5, 0, 9, 5, 0, 0},
    {0, 0, 0, 2, 4, 0, 8},
    {3, 0, 0, 1, 0, 0, 0},
    {0, 0, 7, 0, 0, 9, 4},
    {0, 0, 0, 0, 8, 0, 0},
};

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if (busur[baris][kolom] != 0)
                cout << " -> " << simpul[kolom] << "(" << busur[baris][kolom] << ")";  
        }
        cout << endl;
    }
}

int main() {
    tampilGraph();
    return 0;
}
```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 10\output> & .\'guided1.exe'
Ciamis :  -> Bandung(7) -> Bekasi(8)
Bandung :  -> Bekasi(5) -> Cianjur(9) -> Purwokerto(15)
Bekasi :  -> Bandung(5) -> Tasikmalaya(9) -> Cianjur(5)
Tasikmalaya :  -> Tasikmalaya(2) -> Cianjur(4) -> Yogyakarta(8)       
Cianjur :  -> Ciamis(3) -> Tasikmalaya(1)
Purwokerto :  -> Bekasi(7) -> Purwokerto(9) -> Yogyakarta(4)
Yogyakarta :  -> Cianjur(8)        
PS D:\Struktur-Data-Assignment\Modul 10\output>
```

### 2. Tree
```
#include <iostream>
#include <iomanip> // corrected from <iomannip>
using namespace std;

// Dhonefinisi struktur po
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

//Deklarasi Variabel global
pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

//fungsi inisalisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukkan) {
    simpul = new pohon;
    simpul->data = dataMasukkan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan masukkan data; ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    }else {
        cout << "Root sudah ada..." << endl;
    }
}

void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri: ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatIni = alamat[i];
                saatIni->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan: ";
                cin >> dataUser;
                if (dataUser != '0') {
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }           
            }
            i++;
        }
    }
}

void bacaPohon() {
    if (root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i]!= NULL) {
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
            if (pencacah == n ) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }

}

int main() {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```

## hasil ouput
```
PS D:\Struktur-Data-Assignment\Modul 10\output> & .\'guided2.exe'
Silahkan masukkan data; 2
Root terbentuk...
Masukkan data kiri: 4
Masukkan data kanan: 3
Masukkan data kiri: 256
Masukkan data kanan: Masukkan data kiri: Masukkan data kanan: 0

2
4 3
2 5 6
PS D:\Struktur-Data-Assignment\Modul 10\output>
```

## unguided

## unguided 1
## Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya.
```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string NIM;
    cout << "Silakan masukkan NIM: ";
    cin >> NIM;

    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> simpul(jumlahSimpul);
    cout << "Silakan masukkan nama simpul: " << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    vector<vector<int>> bobot(jumlahSimpul, vector<int>(jumlahSimpul));
    cout << "Silakan masukkan bobot antar simpul:" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << simpul[i] << " --> " << simpul[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    cout << "Output:" << endl;
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << simpul[i] << ": ";
        for (int j = 0; j < jumlahSimpul; ++j) {
            if (j > 0) {
                cout << ", ";
            }
            cout << simpul[j] << " = " << bobot[i][j];
        }
        cout << endl;
    }

    cout << "Process returned 0 (0x0) execution time: 11.763. press any key to continue..." << endl;

    return 0;
}

```

## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 10> cd "d:\Struktur-Data-Assignment\Modul 10\" ; if ($?) { g++ unguided1.cpp -o unguided1 } ; if ($?) { .\unguided1 }
Silakan masukkan NIM: 2311110045
Silakan masukkan jumlah simpul: 2
Silakan masukkan nama simpul: 
Simpul 2: PALU
Silakan masukkan bobot antar simpul:
BALI --> BALI = 0
BALI --> PALU = 3
PALU --> BALI = 4
PALU --> PALU = 0
Output:
BALI: BALI = 0, PALU = 3
PALU: BALI = 4, PALU = 0
Process returned 0 (0x0) execution time: 11.763. press any key to continue...
PS D:\Struktur-Data-Assignment\Modul 10>
```
## penjelasan
 program ini memungkinkan pengguna untuk memasukkan nama simpul dan bobot antar simpul dalam sebuah graf. Graf yang digunakan adalah graf berarah dengan bobot pada setiap sisi.

Header Files: Program menggunakan beberapa header file, yaitu <iostream>, <vector>, dan <string> untuk operasi input-output, penggunaan vektor, dan tipe data string.

Namespace: using namespace std; digunakan untuk mempermudah penggunaan fungsi dan objek yang didefinisikan dalam namespace std.

Variabel NIM: Variabel NIM bertipe string digunakan untuk menyimpan Nomor Induk Mahasiswa.

Input Jumlah Simpul: Pengguna diminta untuk memasukkan jumlah simpul yang akan dimasukkan ke dalam graf.

Input Nama Simpul: Pengguna diminta untuk memasukkan nama setiap simpul. Nama-nama simpul disimpan dalam vektor simpul.

Input Bobot Antar Simpul: Pengguna diminta untuk memasukkan bobot antar simpul. Bobot-bobot disimpan dalam matriks bobot.

Output: 

Program akan mencetak bobot antar simpul dalam bentuk matriks.

Pesan Akhir: Pesan "Process returned 0 (0x0) execution time: 11.763. press any key to continue..." menandakan bahwa program telah selesai dieksekusi.

Hasil output menunjukkan bahwa pengguna telah memasukkan dua simpul, 
yaitu "BALI" dan "PALU", serta bobot antar simpul. 
Setiap entri dalam matriks bobot menunjukkan bobot dari simpul ke simpul lainnya. 
Misalnya, bobot dari simpul "BALI" ke simpul "PALU" adalah 3, 
dan bobot dari simpul "PALU" ke simpul "BALI" adalah 4. 
Matriks bobot kemudian dicetak dalam format yang menunjukkan bobot antar setiap pasangan simpul.

## unguided 2
## Modifikasilah guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, in-order, dan post-order.

```
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct TreeNode {
    string data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string val) : data(val), left(nullptr), right(nullptr) {}
};

void preOrder(TreeNode* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(TreeNode* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(TreeNode* node) {
    if (node == nullptr) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

TreeNode* insertNode(const vector<string>& nodes, int& index) {
    if (index >= nodes.size() || nodes[index] == "#") {
        ++index;
        return nullptr;
    }
    TreeNode* node = new TreeNode(nodes[index]);
    ++index;
    node->left = insertNode(nodes, index);
    node->right = insertNode(nodes, index);
    return node;
}

int main() {
    string NIM;
    cout << "Silakan masukkan NIM: ";
    cin >> NIM;

    int choice;
    TreeNode* root = nullptr;
    vector<string> treeNodes;
    vector<vector<int>> bobot;
    int jumlahSimpul = 0;

    do {
        cout << "\nMenu:\n";
        cout << "1. Masukkan data tree\n";
        cout << "2. Masukkan bobot antar simpul\n";
        cout << "3. Tampilkan tree (pre-order)\n";
        cout << "4. Tampilkan tree (in-order)\n";
        cout << "5. Tampilkan tree (post-order)\n";
        cout << "6. Keluar\n";
        cout << "Silakan pilih: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Silakan masukkan jumlah simpul: ";
                cin >> jumlahSimpul;
                treeNodes.resize(jumlahSimpul);
                cout << "Silakan masukkan nama simpul (gunakan '#' untuk simpul kosong): " << endl;
                for (int i = 0; i < jumlahSimpul; ++i) {
                    cout << "Simpul " << i + 1 << ": ";
                    cin >> treeNodes[i];
                }
                int index = 0;
                root = insertNode(treeNodes, index);
                break;
            }
            case 2: {
                if (jumlahSimpul == 0) {
                    cout << "Silakan masukkan data tree terlebih dahulu." << endl;
                    break;
                }
                bobot.resize(jumlahSimpul, vector<int>(jumlahSimpul));
                cout << "Silakan masukkan bobot antar simpul:" << endl;
                for (int i = 0; i < jumlahSimpul; ++i) {
                    for (int j = 0; j < jumlahSimpul; ++j) {
                        cout << treeNodes[i] << " --> " << treeNodes[j] << " = ";
                        cin >> bobot[i][j];
                    }
                }
                break;
            }
            case 3: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam pre-order: ";
                preOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 4: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam in-order: ";
                inOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 5: {
                auto start = high_resolution_clock::now();
                cout << "Tree dalam post-order: ";
                postOrder(root);
                cout << endl;
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<milliseconds>(end - start);
                cout << "Execution time: " << duration.count() << " milliseconds" << endl;
                break;
            }
            case 6:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != 6);

    cout << "Process returned 0 (0x0) execution time: 11.763. press any key to continue..." << endl;

    return 0;
}
```
## hasil output
```
PS D:\Struktur-Data-Assignment\Modul 10> cd "d:\Struktur-Data-Assignment\Modul 10\" ; if ($?) { g++ unguided2.cpp -o unguided2 } ; if ($?) { .\unguided2 }
Silakan masukkan NIM: 2311110045

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 1
Silakan masukkan jumlah simpul: 2
Silakan masukkan nama simpul (gunakan '#' untuk simpul kosong):
Simpul 1: BALI
Simpul 2: PALU

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 2
Silakan masukkan bobot antar simpul:
BALI --> BALI = 0
BALI --> PALU = 3
PALU --> BALI = 4
PALU --> PALU = 0

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 3
Tree dalam pre-order: BALI PALU
Execution time: 1 milliseconds

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 4
Tree dalam in-order: PALU BALI
Execution time: 1 milliseconds

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 5
Tree dalam post-order: PALU BALI
Execution time: 1 milliseconds

Menu:
1. Masukkan data tree
2. Masukkan bobot antar simpul
3. Tampilkan tree (pre-order)
4. Tampilkan tree (in-order)
5. Tampilkan tree (post-order)
6. Keluar
Silakan pilih: 6
Keluar dari program.
Process returned 0 (0x0) execution time: 11.763. press any key to continue...
PS D:\Struktur-Data-Assignment\Modul 10>
```
## penjelasan
program ini memungkinkan pengguna untuk membangun sebuah pohon (tree) dan menentukan bobot antar simpul pada pohon tersebut. Setiap simpul dalam pohon memiliki nilai string yang unik. Program kemudian menyediakan opsi untuk menampilkan pohon dalam tiga urutan traversal yang berbeda: pre-order, in-order, dan post-order.

Header Files: Program menggunakan beberapa header file, yaitu <iostream>, <vector>, <string>, dan <chrono> untuk operasi input-output, penggunaan vektor, tipe data string, dan mengukur waktu eksekusi.

Struct TreeNode: Program mendefinisikan sebuah struct TreeNode yang memiliki tiga anggota: data untuk menyimpan nilai simpul, left untuk menunjukkan simpul kiri, dan right untuk menunjukkan simpul kanan.

Traversal Functions: Program menyediakan tiga fungsi untuk melakukan traversal pada pohon: preOrder, inOrder, dan postOrder. Ketiga fungsi ini menerima simpul sebagai parameter dan mencetak nilai simpul sesuai dengan urutan traversal yang dipilih.

insertNode Function: Program memiliki sebuah fungsi insertNode yang bertugas untuk membangun pohon berdasarkan urutan yang dimasukkan oleh pengguna. Fungsi ini mengembalikan simpul akar pohon yang telah dibangun.

Main Function: Pada fungsi main, program meminta pengguna untuk memasukkan NIM dan menyediakan menu pilihan untuk berinteraksi dengan pohon yang telah dibangun. Pengguna dapat memasukkan data simpul, bobot antar simpul, dan memilih untuk menampilkan pohon dalam tiga urutan traversal yang berbeda.

Output: 
Hasil output menunjukkan interaksi antara pengguna dengan program. Pengguna diminta untuk memasukkan data simpul, kemudian bobot antar simpul. Setelah itu, pengguna dapat memilih untuk menampilkan pohon dalam tiga urutan traversal yang berbeda. Waktu eksekusi untuk setiap tampilan traversal juga ditampilkan.

Pesan Akhir: Pesan "Process returned 0 (0x0) execution time: 11.763. press any key to continue..." menandakan bahwa program telah selesai dieksekusi.

Hasil output:
menunjukkan bahwa pengguna telah membangun pohon dengan dua simpul, yaitu "BALI" dan "PALU", serta menentukan bobot antar simpul. Selanjutnya, pengguna memilih untuk menampilkan pohon dalam pre-order, in-order, dan post-order, diikuti dengan waktu eksekusi untuk setiap tampilan traversal. Program berakhir ketika pengguna memilih opsi untuk keluar.

## kesimpulan
Pada modul ini kita belajar mengenai graf dan tree. Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk sisi atau edge. Kemudian pohon/tree adalah struktur data yang sangat umum dan kuat yang menyerupai nyata pohon. Ini terdiri dari satu set node tertaut yang terurut dalam grafik yang terhubung, dimana setiap node memiliki paling banyak satu simpul induk, dan nol atau lebih simpul anak dengan urutan tertentu. Struktur data tree digunakan untuk menyimpan data-data hirarki seperti pohon keluarga, skema pertandingan, struktur organisasi. dari tugas unguided yang diberikan kita dapat belajar membuat program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya dan memodifikasi guided tree dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, in-order, dan post-order.

## references
[1] Sjukani, Moh. 2007. Struktur Data (Algoritma & Struktur Data 2) dengan C, C++. Jakarta : Penerbit Mitra Wacana Media.

[2] TylerMSFT. (n.d.). Collections (C++/CX). diakses dari https://learn.microsoft.com/en-us/cpp/cppcx/collections-c-cx?view=msvc-170
[3] Ashraf, Zeeshan. (2017). Data Structure in C++ Graphically.
[4] Karumanchi, N. (2011). Data Structures and Algorithms Made Easy: 700 Data Structure and Algorithmic Puzzles. CreateSpace.
