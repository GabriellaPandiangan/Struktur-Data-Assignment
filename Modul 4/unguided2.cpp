#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah string
int hitungVokal(string kalimat) {
    int jumlahVokal = 0;
    for (char karakter : kalimat) {
        // Mengecek apakah karakter adalah huruf vokal (A/a, E/e, I/i, O/o, U/u)
        if (karakter == 'a' || karakter == 'A' || karakter == 'e' || karakter == 'E' ||
            karakter == 'i' || karakter == 'I' || karakter == 'o' || karakter == 'O' ||
            karakter == 'u' || karakter == 'U') {
            jumlahVokal++;
        }
    }
    return jumlahVokal;
}

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = hitungVokal(kalimat);
    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << jumlahVokal << endl;

    return 0;
}
