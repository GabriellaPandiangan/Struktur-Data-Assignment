#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::cout << "Data array: ";
    std::vector<int> numbers;
    numbers.reserve(10);

    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    int num;
    while (iss >> num) {
        numbers.push_back(num);
    }
    std::vector<int> evenNumbers,oddNumbers;
    for (int num : numbers) {
        if (num % 2 == 0) {
            evenNumbers.push_back(num);
        } else {
            oddNumbers.push_back(num);
        }
    }
    std::cout << "Nomor Genap: ";
    for (int i = 0; i < evenNumbers.size(); ++i) {
        std::cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << std::endl;
    std::cout << "Nomor Ganjil: ";
    for (int i = 0; i < oddNumbers.size(); ++i) {
        std::cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << std::endl;
    
    return 0;
}