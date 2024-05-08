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
