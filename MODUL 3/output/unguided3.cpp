#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah karakter: ";
    cin >> n;

    vector<char> characters(n);

    cout << "Masukkan " << n << " karakter: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Karakter ke " << i + 1 << " = ";
        cin >> characters[i];
    }

    // Melakukan pengurutan naik (ascending)
    sort(characters.begin(), characters.end());

    cout << "Hasil ascending sort: ";
    for (char ch : characters) {
        cout << ch << " ";
    }
    cout << endl;

    // Melakukan pengurutan turun (descending)
    sort(characters.rbegin(), characters.rend());

    cout << "Hasil descending sort: ";
    for (char ch : characters) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
