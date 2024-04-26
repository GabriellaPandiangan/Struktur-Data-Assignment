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

