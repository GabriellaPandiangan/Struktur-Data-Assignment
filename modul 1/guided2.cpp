#include <iostream>
#include <stdio.h>
using namespace std;

//Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 25;

    cout << "Nama : " << mhs1.name << endl;
    cout << "Alamat : " << mhs1.address << endl;
    cout << "Usia : " << mhs1.age << endl;
    cout << "Nama : " << mhs2.name << endl;
    cout << "Alamat : " << mhs2.address << endl;
    cout << "Usia : " << mhs2.age << endl;
    return 0;
}
