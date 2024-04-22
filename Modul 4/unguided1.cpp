#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Fungsi untuk membersihkan tanda baca dari sebuah kata
string removePunctuation(const string& word) {
    string cleaned_word;
    for (char c : word) {
        if (isalnum(c) || c == '-') {
            cleaned_word += tolower(c);
        }
    }
    return cleaned_word;
}

// Fungsi untuk memisahkan kata dalam sebuah kalimat
vector<string> splitSentence(const string& sentence) {
    vector<string> words;
    string word = "";
    for (char c : sentence) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }
    return words;
}

// Fungsi untuk mencari kata dalam vector menggunakan binary search
bool searchWord(const vector<string>& words, const string& target) {
    int left = 0;
    int right = words.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (words[mid] == target) {
            return true;
        } else if (words[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    string sentence, target;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    cout << "Masukkan kata yang ingin dicari: ";
    cin >> target;

    // Memisahkan kalimat menjadi kata-kata, menghapus tanda baca, dan mengurutkannya secara alfabetis
    vector<string> words = splitSentence(sentence);
    sort(words.begin(), words.end());

    // Melakukan pencarian kata dalam kalimat menggunakan binary search
    bool found = searchWord(words, removePunctuation(target));

    if (found) {
        cout << "Kata '" << target << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Kata '" << target << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
