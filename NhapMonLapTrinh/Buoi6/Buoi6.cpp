

#include <iostream>
using namespace std;
void cau1() {
	int n;
	cout << "nhap n :";
	cin >> n;
	int sum = 0;
	for (int i = 1; i >= n; i++) {
		sum += i;
	}
	cout << " tong tu 1 den " << n << " la:" << sum << endl;
}
void cau6() {
	int n, tong = 0;
	cout << "nhap n :";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	cout << "tong cac uoc cua so  " << n << "la :" << tong << endl;

}
void cau7() {
	int n, tong = 0;
	cout << " nhap n :";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (n == tong)
		cout << n << "la so hoan thien ." << endl;
	else
		cout << n << " khong phai la so hoan thien ." << endl;
}
void cau8() {
	int n, dem = 0;
	cout << "nhap n:";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
		}
   }
	if (dem == 2)
		cout << n << " la so nguyen to " << endl;
	else
		cout << n << " khong phai la so nguyen to " << endl;


}
int main() {
	cau8();
}
