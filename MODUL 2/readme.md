# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Gabriella F Pandiangan</p>

## Features

- [Guided](#guided)
- [Unguided](#unguided)


## Dasar Teori
Array merupakan struktur data yang paling dasar. Sebelum mempelajari struktur data
lainnya, alangkah baiknya, kita perlu mempelajari Array terlebih dahulu. Berikut ini
adalah beberapa jenis array :
1) Array Satu Dimensi
Array satu dimensi adalah tipe variabel yang terdiri dari kumpulan data
dengan tipe yang sama yang disusun dalam satu baris atau satu dimensi. Setiap
elemen di dalam array memiliki sebuah indeks atau nomor yang digunakan
untuk mengakses elemen tersebut. Indeks dimulai dari 0 dan berakhir pada
jumlah elemen dikurangi satu.
2) Array Dua Dimensi
Array dua dimensi adalah variable yang terdiri dari kumpulan array
satu dimensi dengan tipe yang sama yang disusun dalam baris dan kolom.
Dalam array dua dimensi, setiap elemen memiliki dua indeks, yaitu indeks
baris dan indeks kolom. Indeks baris menunjukkan posisi elemen dalam baris,
sementara indeks kolom menunjukkan posisi elemen dalam kolom.
3) Array Multidimensi
Array multidimensi memiliki kesamaan dengan array satu dimensi dan
dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini
digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau
array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array
empat dimensi, array lima dimensi, dan seterusnya.
4) Array empat dimensi
5) Array 5 dimensi

## Guided 

### 1. Program input array 3 dimensi
```int main() 
{
     // Deklarasi array
    int arr[2] [3] [3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            { 
                 cout << "Input Array [" << x << "] [" << y <<"] [" << z << "] = ";
                 cin >> arr [x] [y] [z];
            }
        }
                 cout << endl;
    }

// Output array
for (int x = 0; x < 2; x++)
{
    for (int y = 0; y < 3; y++)
    {
        for (int z= 0; z < 3; z++)
        {
            cout << "Data array[" << x << "] [" << y << "] [" << z << "] = " << arr [x] [y] [z] << ends;
        }
    }
}
cout << endl;
// Tampilkan array
    for (int x = 0; x < 2; x++)
    {
       for (int y = 0; y < 3; y++)
       {
         for (int z = 0; z < 3; z++)
         {
            cout << arr [x] [y] [z] << ends;
         }
        cout << endl;
       }
    cout << endl;
    }
    return 0;
}

   
   
}

```
### 2. Panjang Array
```#include <iostream>
using namespace std;

int main () 
{
    int maks, a, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;

    if (a <= 0) {
        cout << "Panjang array harus lebih besar dari 0." << endl;
        return 1; 
    }

    int array[a];
    cout << "Masukkan " << a << " angka/n";

    for (int i = 0; i < a; i++) {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> array [i];
    }

    maks = array[0];
    lokasi = 0;
    
    for (int i = 1; i < a; i++) {
        if (array[i] > maks) {
            maks = array [1];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << (lokasi +1)<<endl;

    return 0; 
}


## Unguided

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!
```C++
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

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>

using namespace std;

int main() {
    int x_size, y_size, z_size;

    // Input ukuran array dari user
    cout << "Masukkan ukuran array dalam dimensi X: ";
    cin >> x_size;
    cout << "Masukkan ukuran array dalam dimensi Y: ";
    cin >> y_size;
    cout << "Masukkan ukuran array dalam dimensi Z: ";
    cin >> z_size;

    // Inisialisasi array tiga dimensi dengan ukuran yang diberikan
    int arr[x_size][y_size][z_size];

    // Mengisi array dengan nilai yang diinputkan
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < x_size; ++i) {
        for (int j = 0; j < y_size; ++j) {
            for (int k = 0; k < z_size; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "]: ";
                cin >> arr[i][j][k];
            }
        }
    }

    // Menampilkan isi array
    cout << "\nIsi array:\n";
    for (int i = 0; i < x_size; ++i) {
        for (int j = 0; j < y_size; ++j) {
            for (int k = 0; k < z_size; ++k) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai
rata – rata dari suatu array dengan input yang dimasukan oleh user!
```C++
#include <iostream>
#include <vector>

// Fungsi untuk mencari nilai maksimum dalam array
int findMax(const std::vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Fungsi untuk mencari nilai minimum dalam array
int findMin(const std::vector<int>& arr) {
    int min = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Fungsi untuk mencari nilai rata-rata dalam array
double findAverage(const std::vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    std::vector<int> numbers;

    // Meminta pengguna untuk memasukkan elemen-elemen array
    std::cout << "Masukkan elemen-elemen array (akhiri dengan -1):\n";
    int num;
    while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }

    // Menampilkan menu dan memproses pilihan pengguna
    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Cari nilai maksimum\n";
        std::cout << "2. Cari nilai minimum\n";
        std::cout << "3. Cari nilai rata-rata\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Nilai maksimum: " << findMax(numbers) << std::endl;
                break;
            case 2:
                std::cout << "Nilai minimum: " << findMin(numbers) << std::endl;
                break;
            case 3:
                std::cout << "Nilai rata-rata: " << findAverage(numbers) << std::endl;
                break;
            case 4:
                std::cout << "Terima kasih!\n";
                break;
            default:
                std::cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 4);

    return 0;
}

