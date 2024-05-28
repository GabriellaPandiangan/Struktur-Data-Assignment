#include <iostream>

unsigned long long helper(int n, int result) {
    if (n == 0 || n == 1) {
        return result;
    } else {
        return helper(n - 1, n * result);
    }
}

unsigned long long factorial(int n) {
    return helper(n, 1);
}

int main() {
    int num;
    std::cout << "Masukkan bilangan bulat positif: ";
    std::cin >> num;
    std::cout << "Faktorial dari " << num << " adalah: " << factorial(num) << std::endl;
    return 0;
}