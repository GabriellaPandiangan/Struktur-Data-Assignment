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
