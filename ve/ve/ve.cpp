

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double canhan(double thunhap) {
    if (thunhap <= 4000000) {
        return 0;
    }
    if (thunhap <= 6000000) {
        return (thunhap - 4000000) * 0.05;
    }
    if (thunhap <= 9000000) {
        return (thunhap - 6000000) * 0.1 + canhan(6000000);
    }
    if (thunhap <= 14000000) {
        return (thunhap - 9000000) * 0.15 + canhan(9000000);
    }
    return (thunhap - 14000000) * 0.2 + canhan(14000000);
}

double canhan(double thunhap, double phuthuoc) {
    double thunhap_chiu_thue = thunhap - phuthuoc * 1600000;
    return canhan(thunhap_chiu_thue);
}

double doanhnghiep(double arr[], int phuthuoc) {
    double tongtienthue = 0;
    for (int i = 0; i < 12; i++) {
        tongtienthue += canhan(arr[i], phuthuoc);
    }
    return tongtienthue;
}

double nhanuoc(double thunhap) {
    if (thunhap <= 48000000) return 0;
    if (thunhap <= 72000000) return (thunhap - 48000000) * 0.05;
    if (thunhap <= 108000000) return (thunhap - 72000000) * 0.1 + 1200000;
    if (thunhap <= 168000000) return (thunhap - 108000000) * 0.15 + 4800000;
    if (thunhap <= 288000000) return (thunhap - 168000000) * 0.2 + 13800000;
    if (thunhap <= 528000000) return (thunhap - 288000000) * 0.25 + 37800000;
    if (thunhap <= 1008000000) return (thunhap - 528000000) * 0.3 + 97800000;
    return (thunhap - 1008000000) * 0.35 + 241800000;
}

double nhanuoc(double arr[], int phuthuoc) {
    double tongthunhap = 0;
    for (int i = 0; i < 12; i++) {
        tongthunhap += arr[i];
    }
    double thunhapchiuthue = tongthunhap - phuthuoc * 1600000 * 12;
    return nhanuoc(thunhapchiuthue);
}
int main() {
    double thunhap[12] = { 5000000, 4000000, 12000000, 9000000, 8000000, 7000000, 6000000, 8500000, 7000000, 15000000, 8000000, 20000000 };
    int phuthuoc = 2;
    double D = doanhnghiep(thunhap, phuthuoc);
    double C = nhanuoc(thunhap, phuthuoc);
    cout << "Doanh nghiep phai nop: " << fixed << setprecision(2) << D << " VND" << endl;
    cout << "Ca nhan phai nop: " << fixed << setprecision(2) << C << " VND" << endl;
    return 0;
}