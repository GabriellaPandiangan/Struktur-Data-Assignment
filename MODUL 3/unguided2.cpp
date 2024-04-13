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
