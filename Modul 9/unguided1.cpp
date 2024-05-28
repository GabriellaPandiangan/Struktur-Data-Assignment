#include<iostream>
using namespace std;

long long faktorial(int n) {
    if(n > 1)
        return n * faktorial(n - 1);
    else
        return 1;
}

int main() {
    int num;
    cout << "Masukkan bilangan bulat positif: ";
    cin >> num;
    cout << "Faktorial dari " << num << " adalah: " << faktorial(num) << endl;
    return 0;
}