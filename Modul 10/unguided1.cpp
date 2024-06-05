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
