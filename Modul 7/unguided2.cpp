#include <iostream>
#include <string>
#include <stack>

bool isPalindrom(std::string kalimat) {
    std::stack<char> stack;
    std::string kalimatTerbalik = "";

    // Push all characters of the word to the stack
    for (char c : kalimat) {
        stack.push(c);
    }

    // Pop all characters from the stack and construct the reversed word
    while (!stack.empty()) {
        kalimatTerbalik += stack.top();
        stack.pop();
    }

    // Check if the word and the reversed word are the same
    if (kalimat == kalimatTerbalik) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int pilihan;
    std::string kalimat;

    while (true) {
        std::cout << "Pilih menu:\n";
        std::cout << "1. Cek apakah kalimat adalah palindrom\n";
        std::cout << "2. Keluar\n";
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        if (pilihan == 1) {
            std::cout << "Masukkan kalimat: ";
            std::cin.ignore();
            std::getline(std::cin, kalimat);

            if (isPalindrom(kalimat)) {
                std::cout << "Kalimat ini adalah palindrom.\n";
            } else {
                std::cout << "Kalimat ini bukan palindrom.\n";
            }
        } else if (pilihan == 2) {
            break;
        } else {
            std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    }

    return 0;
}