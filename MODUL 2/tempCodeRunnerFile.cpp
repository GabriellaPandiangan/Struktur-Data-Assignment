#include <iostream>
using namespace std;

int main() {
    int x, y, z;

    // Meminta pengguna untuk memasukkan ukuran array tiga dimensi
    cout << "Masukkan ukuran array tiga dimensi (x y z): ";
    cin >> x >> y >> z;

    // Mendeklarasikan array tiga dimensi dengan ukuran yang dimasukkan oleh pengguna
    int arr[x][y][z];

    // Memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan elemen-elemen array
    cout << "\nArray yang dimasukkan:\n";
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
