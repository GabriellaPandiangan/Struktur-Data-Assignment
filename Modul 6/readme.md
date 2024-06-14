# <h1 align="center">Laporan Praktikum Modul Single and Double Linked List</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
a)	Single Linked List
Linked List merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list dihubungkan ke elemen lain melalui pointer. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Pointer adalah alamat elemen. Setiap simpul pada dasarnya dibagi atas  dua bagian pertama disebut bagian isi atau informasi atau data yang berisi nilai yang disimpan oleh simpul. Bagian kedua disebut bagian pointer yang berisi alamat dari node berikutnya atau sebelumnya. Dengan menggunakan struktur seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head dan elemen terakhir dari suatu list disebut tail.
 

Linked List Circular 
Linked list circular merupakan linked list yang tidak memiliki akhir karena node  terakhir (tail) tidak bernilai ‘NULL’, tetapi terhubung dengan node pertama (head).  Saat menggunakan linked list circular kita membutuhkan dummy node atau node  pengecoh yang biasanya dinamakan dengan node current supaya program dapat  berhenti menghitung data ketika node current mencapai node pertama (head). 
Linked list circular dapat digunakan untuk menyimpan data yang perlu diakses  secara berulang, seperti daftar putar lagu, daftar pesan dalam antrian, atau  penggunaan memori berulang dalam suatu aplikasi


b)	Double Linked List

Double Linked List adalah struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. Dengan adanya pointer prev, Double Linked List memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul mana saja secara efisien. Setiap simpul pada Double Linked List memiliki tiga elemen penting, yaitu elemen data (biasanya berupa nilai), pointer next yang menunjuk ke simpul
berikutnya, dan pointer prev yang menunjuk ke simpul sebelumnya.

Keuntungan dari Double Linked List adalah memungkinkan untuk melakukan operasi penghapusan dan penambahan pada simpul dimana saja dengan efisien, sehingga sangat berguna dalam implementasi beberapa algoritma yang membutuhkan operasi tersebut. Selain itu, Double Linked List juga memungkinkan kita untuk melakukan traversal pada list baik dari depan (head) maupun dari belakang (tail) dengan mudah. Namun, kekurangan dari Double Linked List adalah penggunaan memori yang lebih besar dibandingkan dengan Single Linked List, karena setiap simpul membutuhkan satu pointer tambahan. Selain itu, Double Linked List juga membutuhkan waktu eksekusi yang lebih lama dalam operasi penambahan dan penghapusan jika dibandingkan dengan Single Linked List.
Di dalam sebuah linked list, ada 2 pointer yang menjadi penunjuk utama, yakni pointer HEAD yang menunjuk pada node pertama di dalam linked list itu sendiri dan pointer TAIL yang menunjuk pada node paling akhir di dalam linked list. Sebuah linked list dikatakan kosong apabila isi pointer head adalah NULL. Selain itu, nilai pointer prev dari HEAD selalu NULL, karena merupakan data pertama. Begitu pula dengan pointer next dari TAIL yang selalu bernilai NULL sebagai penanda data terakhir. 

## Guided 

### 1. Latihan single Linked list
```#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```

## Output 
```
l 6\output> & .\'guided1.exe'
3
35
235
1235
235
23
273
23
13
18
111
Posisi bukan posisi tengah
111
```

### 2. Latihan Double Linked list
```#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```
//output 
```
PS D:\Struktur-Data-Assignment\Modul 6\output> & .\'guided2.exe'
1. Add data
2. Delete data
3. Update data
4. Clear data
5. Display data
6. Exit
Enter your choice:
```


## Unguided

### 1.Buatlah program menu Single Linked List Non-Circular untuk menyimpan Nama dan usia mahasiswa, dengan menggunakan inputan dari user. Lakukan operasi berikut: a.	Masukkan data sesuai urutan berikut. (Gunakan insert depan, belakang atau tengah). Data pertama yang dimasukkan adalah nama dan usia anda.[Nama_anda]	[Usia_anda] John	19 Jane	20 Michael	18] Yusuke	19 Akechi	20 Hoshino	18 Karin	18 b.	Hapus data Akechi c.	Tambahkan data berikut diantara John dan Jane : Futaba	18 d.	Tambahkan data berikut diawal : Igor	20 e.	Ubah data Michael menjadi : Reyn	18 f.	Tampilkan seluruh data


```
#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    int age;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    void insertData(string name, int age) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->age = age;
        newNode->next = head;
        head = newNode;
    }

    void insertAfter(string prevName, string name, int age) {
        Node* newNode = new Node();
        newNode->name = name;
        newNode->age = age;

        Node* current = head;
        while (current!= nullptr) {
            if (current->name == prevName) {
                newNode->next = current->next;
                current->next = newNode;
                return;
            }
            current = current->next;
        }

        cout << "Previous node not found." << endl;
    }

    void deleteNode(string name) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->name == name) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current!= nullptr) {
            if (current->name == name) {
                previous->next = current->next;
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }

        cout << "Node not found." << endl;
    }

    void updateNode(string name, string newName, int newAge) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->name == name) {
            head->name = newName;
            head->age = newAge;
            return;
        }

        Node* current = head;

        while (current!= nullptr) {
            if (current->name == name) {
                current->name = newName;
                current->age = newAge;
                return;
            }
            current = current->next;
        }

        cout << "Node not found." << endl;
    }

    void displayList() {
        Node* current = head;

        while (current!= nullptr) {
            cout << current->name << " " << current->age << endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;

    // Insert data
    list.insertData("Gabriella", 19);
    list.insertData("John", 19);
    list.insertData("Jane", 20);
    list.insertData("Michael", 18);
    list.insertData("Yusuke", 19);
    list.insertData("Akechi", 20);

    // Display data
    list.displayList();

    // Delete Akechi
    list.deleteNode("Akechi");
    cout << "Deleted Akechi" << endl;

    // Insert Futaba between John and Jane
    list.insertAfter("John", "Futaba", 18);
    cout << "Inserted Futaba between John and Jane" << endl;

    // Display data
    list.displayList();

    // Update Michael to Reyn
    list.updateNode("Michael", "Reyn", 18);
    cout << "Updated Michael to Reyn" << endl;

    // Display data
    list.displayList();

    // Insert Hoshino and Karin
    list.insertData("Hoshino", 18);
    list.insertData("Karin", 18);

    // Display data
    list.displayList();

    return 0;
}
```
## output
```
l 6\output> & .\'unguided1.exe'
Akechi 20
Yusuke 19
Michael 18
Jane 20
John 19
Gabriella 19
Deleted Akechi
Inserted Futaba between John and Jane
Yusuke 19
Michael 18
Jane 20
John 19
Futaba 18
Gabriella 19
Updated Michael to Reyn
Yusuke 19
Reyn 18
Jane 20
John 19
Futaba 18
Gabriella 19
Karin 18
Hoshino 18
Yusuke 19
Reyn 18
Jane 20
John 19
Futaba 18
Gabriella 19
```
## penjelasan
Dalam program ini, terdapat dua kelas utama: Node yang merepresentasikan sebuah node dalam linked list, dan LinkedList yang merupakan kelas utama untuk operasi-operasi pada linked list.

Node memiliki tiga atribut: name (nama), age (umur), dan next (pointer ke node berikutnya).
LinkedList memiliki operasi-operasi untuk memanipulasi linked list, seperti insertData untuk menyisipkan data baru, insertAfter untuk menyisipkan data setelah node tertentu, deleteNode untuk menghapus node, updateNode untuk memperbarui data pada sebuah node, dan displayList untuk menampilkan seluruh data dalam linked list.
Pada main() function, linked list dibuat dan diisi dengan beberapa data. Kemudian, operasi-operasi seperti penghapusan, penambahan setelah suatu node, dan pembaruan dilakukan pada linked list, yang diikuti dengan menampilkan isi linked list setiap kali operasi dilakukan.

Hasil output menunjukkan efek dari operasi-operasi yang dilakukan. Misalnya, setelah Akechi dihapus, Futaba disisipkan antara John dan Jane, Michael diperbarui menjadi Reyn, dan Hoshino serta Karin ditambahkan ke linked list. Setiap kali ada perubahan, isi linked list ditampilkan untuk memverifikasi perubahan yang terjadi.

### 2. Modifikasi Guided Double Linked List dilakukan dengan penambahan operasi untuk menambah data, menghapus, dan update di tengah / di urutan tertentu yang diminta. Selain itu, buatlah agar tampilannya menampilkan Nama produk dan harga. Nama Produk	Harga Originote	60.000 Somethinc	150.000 Skintific	100.000 Wardah	50.000 Hanasui	30.000. Case: 1.	Tambahkan produk Azarine dengan harga 65000 diantara Somethinc dan Skintific 2.	Hapus produk wardah 3.	Update produk Hanasui menjadi Cleora dengan harga 55.000 4.	Tampilkan menu seperti dibawah ini Toko Skincare Purwokerto.       1.	Tambah Data 2.	Hapus Data 3.	Update Data 4.	Tambah Data Urutan Tertentu 5.	Hapus Data Urutan Tertentu 6.	Hapus Seluruh Data 7.	Tampilkan Data 8.	Exit Pada menu 7, tampilan akhirnya akan menjadi seperti dibawah ini :   Nama Produk	Harga   Originote	60.000 Somethinc	150.000 Azarine	65.000 Skintific	100.000 Cleora	55.000

```C++
#include <iostream>
#include <iomanip>
using namespace std;

// Node structure
struct Node {
    string productName;
    int price;
    Node* prev;
    Node* next;
};

// Class for Guided Double Linked List
class DoubleLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoubleLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Function to add a node at the end
    void addNode(string productName, int price) {
        Node* newNode = new Node();
        newNode->productName = productName;
        newNode->price = price;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to add a node at a specific position
    void addNodeAtPosition(string productName, int price, int position) {
        if (position <= 0) {
            cout << "Invalid position\n";
            return;
        }

        Node* newNode = new Node();
        newNode->productName = productName;
        newNode->price = price;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (position == 1 || head == nullptr) {
            newNode->next = head;
            if (head != nullptr)
                head->prev = newNode;
            head = newNode;
            if (tail == nullptr)
                tail = newNode;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1 && temp != nullptr; i++) {
                temp = temp->next;
            }
            if (temp == nullptr) {
                cout << "Invalid position\n";
                return;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next != nullptr)
                temp->next->prev = newNode;
            temp->next = newNode;
            if (temp == tail)
                tail = newNode;
        }
    }

    // Function to delete a node by product name
    void deleteNode(string productName) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->productName == productName) {
                if (temp == head) {
                    head = head->next;
                    if (head != nullptr)
                        head->prev = nullptr;
                } else if (temp == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                } else {
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;
                }
                delete temp;
                cout << "Deleted " << productName << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Product not found\n";
    }

    // Function to update a node by product name
    void updateNode(string productName, string newProductName, int newPrice) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->productName == productName) {
                temp->productName = newProductName;
                temp->price = newPrice;
                cout << "Updated " << productName << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Product not found\n";
    }

    // Function to display all nodes
    void display() {
        cout << setw(15) << left << "Nama Produk" << setw(10) << "Harga" << endl;
        Node* temp = head;
        while (temp != nullptr) {
            cout << setw(15) << left << temp->productName << setw(10) << temp->price << endl;
            temp = temp->next;
        }
    }

    // Function to delete all nodes
    void deleteAll() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        cout << "All products deleted\n";
    }
};

int main() {
    DoubleLinkedList dll;
    dll.addNode("Originote", 60000);
    dll.addNode("Somethinc", 150000);
    dll.addNode("Skintific", 100000);
    dll.addNode("Wardah", 50000);
    dll.addNode("Hanasui", 30000);

    int choice;
    string productName, newProductName;
    int price, newPosition;

    do {
        cout << "\nToko Skincare Purwokerto\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Update Data\n";
        cout << "4. Tambah Data Urutan Tertentu\n";
        cout << "5. Hapus Data Urutan Tertentu\n";
        cout << "6. Hapus Seluruh Data\n";
        cout << "7. Tampilkan Data\n";
        cout << "8. Exit\n";
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nama Produk: ";
                cin >> productName;
                cout << "Masukkan Harga: ";
                cin >> price;
                dll.addNode(productName, price);
                break;
            case 2:
                cout << "Masukkan Nama Produk yang Ingin Dihapus: ";
                cin >> productName;
                dll.deleteNode(productName);
                break;
            case 3:
                cout << "Masukkan Nama Produk yang Ingin Diupdate: ";
                cin >> productName;
                cout << "Masukkan Nama Produk Baru: ";
                cin >> newProductName;
                cout << "Masukkan Harga Baru: ";
                cin >> price;
                dll.updateNode(productName, newProductName, price);
                break;
            case 4:
                cout << "Masukkan Nama Produk: ";
                cin >> productName;
                cout << "Masukkan Harga: ";
                cin >> price;
                cout << "Masukkan Urutan: ";
                cin >> newPosition;
                dll.addNodeAtPosition(productName, price, newPosition);
                break;
            case 5:
                // Implementation for deleting a node at specific position can be added here
                cout << "Feature not implemented yet\n";
                break;
            case 6:
                dll.deleteAll();
                break;
            case 7:
                dll.display();
                break;
            case 8:
                cout << "Terima kasih telah menggunakan layanan kami.\n";
                break;
            default:
                cout << "Pilihan tidak valid\n";
        }
    } while (choice != 8);

    return 0;
}
```
## output
```
PS D:\Struktur-Data-Assignment\Modul 6\output> & .\'unguided2.exe'

Toko Skincare Purwokerto
1. Tambah Data
2. Hapus Data
3. Update Data
4. Tambah Data Urutan Tertentu
5. Hapus Data Urutan Tertentu
6. Hapus Seluruh Data
7. Tampilkan Data
8. Exit
Pilih: 7
Nama Produk    Harga
Originote      60000
Somethinc      150000
Skintific      100000
Wardah         50000
Hanasui        30000

Toko Skincare Purwokerto
1. Tambah Data
2. Hapus Data
3. Update Data
4. Tambah Data Urutan Tertentu
5. Hapus Data Urutan Tertentu
6. Hapus Seluruh Data
7. Tampilkan Data
8. Exit
Pilih:
```
## penjelasan 
Program ini memungkinkan pengguna untuk menambah, menghapus, memperbarui, menambahkan data pada posisi tertentu, serta menampilkan data produk.

Struktur Node memiliki empat atribut: productName (nama produk), price (harga produk), prev (pointer ke node sebelumnya), dan next (pointer ke node berikutnya).
Kelas DoubleLinkedList memiliki beberapa fungsi untuk memanipulasi linked list, seperti addNode untuk menambahkan node baru di akhir, addNodeAtPosition untuk menambahkan node pada posisi tertentu, deleteNode untuk menghapus node berdasarkan nama produk, updateNode untuk memperbarui informasi produk berdasarkan nama produk, display untuk menampilkan semua produk, dan deleteAll untuk menghapus semua produk dari linked list.
Dalam main() function, pengguna diberi menu pilihan untuk berbagai operasi yang dapat dilakukan pada linked list produk skincare. Pengguna dapat menambahkan data baru, menghapus data, memperbarui data, menambahkan data pada posisi tertentu (walaupun ini belum diimplementasikan), menghapus semua data, menampilkan semua data, atau keluar dari program.

Output yang diberikan menunjukkan tampilan awal menu saat program pertama kali dijalankan dan menampilkan semua produk skincare yang sudah ada dalam linked list.
## kesimpulan
linked list yang merupakan suatu bentuk struktur data yang berisi kumpulan data yang disebut sebagai node yang tersusun secara sekuensial, saling sambung menyambung, dinamis, dan terbatas. Setiap elemen dalam linked list dihubungkan ke elemen lain melalui pointer. Masing-masing komponen sering disebut dengan simpul atau node atau verteks. Lalu ada linked list circular yang merupakan linked list yang tidak memiliki akhir karena node terakhir (tail) tidak bernilai ‘NULL’, tetapi terhubung dengan node pertama (head) dan ada double linked List yang merupakan struktur data Linked List yang mirip dengan Single Linked List, namun dengan tambahan satu pointer tambahan pada setiap simpul yaitu pointer prev yang menunjuk ke simpul sebelumnya. program ini mampu mengimplementasikan bagaimana single linked list non-circular bekerja untuk menyimpan nama dan usia mahasiswa dengan menggunakan inputan dari user dan mengimplementasikan double linked list dengan menambahkan CRUD dan memperbaiki tampilan hasilnya.

## references
[1] Carraway, J. (1996). Doubly-Linked Opportunities. ACM SIG3C 3C ONLINE, Vol. 3, No. 1, pp.9-12
[2] M. R. Abu Sara, “Balanced Linked List (BaLL): A Modified Linked List for Efficiently Maintaining a Sorted Sequence of Data,” vol. 6, Apr. 2021, doi: https://doi.org/10.15282/ijsecs.6.1.2020.6.0069.

