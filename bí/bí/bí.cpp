#include <iostream>
#include <cmath> 
bool kiemTraSoNguyenTo(int n) { 
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cout << "Nhap mot so nguyen: ";
    std::cin >> n;
    if (kiemTraSoNguyenTo(n)) {
        std::cout << n << " la so nguyen to." << std::endl;
    }
    else {
        std::cout << n << " khong phai la so nguyen to." << std::endl;
    }

    return 0;
}