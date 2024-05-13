#include <iostream>
#include <string>
#include <stack>

bool isPalindrom(std::string word) {
    std::stack<char> s;
    std::string reversedWord = "";

    // Push all characters of the word to the stack
    for (char c : word) {
        s.push(c);
    }

    // Pop all characters from the stack and construct the reversed word
    while (!s.empty()) {
        reversedWord += s.top();
        s.pop();
    }

    // Check if the word and the reversed word are the same
    if (word == reversedWord) {
        return true;
    } else {
        return false;
    }
}

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);

    if (isPalindrom(input)) {
        std::cout << "Kalimat tersebut adalah palindrom." << std::endl;
    } else {
        std::cout << "Kalimat tersebut bukan palindrom." << std::endl;
    }

    return 0;
}
