#include <iostream>
#include "TIEPVIEN.h"
#include <iomanip>

using namespace std;

TiepVien::TiepVien() : Nhanvien() {
	this->SoChuyen = 0;
}
void TiepVien::tinhluong() {
	this->luong = this->SoChuyen * 3000000.0 * 1000.0;
}
void TiepVien::nhap() {
	Nhanvien::nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> this->SoChuyen;
}

void TiepVien::xuat() {
	this->tinhluong();
	Nhanvien::xuat();
	cout << "\nLuong: " << setprecision(2) << fixed << this->luong << " Dong." << endl;
}