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
