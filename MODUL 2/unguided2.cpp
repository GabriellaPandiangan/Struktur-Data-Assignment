#include <iostream>

using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Input ukuran array dari user
    cout << "Masukkan ukuran array dalam dimensi X: ";
    cin >> x_size;
    cout << "Masukkan ukuran array dalam dimensi Y: ";
    cin >> y_size;
    cout << "Masukkan ukuran array dalam dimensi Z: ";
    cin >> z_size;

    // Inisialisasi array tiga dimensi dengan ukuran yang diberikan
    int arr[x_size][y_size][z_size];

    // Mengisi array dengan nilai yang diinputkan
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < x_size; ++i) {
        for (int j = 0; j < y_size; ++j) {
            for (int k = 0; k < z_size; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan isi array
    cout << "\nIsi array:\n";
    for (int i = 0; i < x_size; ++i) {
        for (int j = 0; j < y_size; ++j) {
            for (int k = 0; k < z_size; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
