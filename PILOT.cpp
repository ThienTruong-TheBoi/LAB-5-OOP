#include <iostream>
#include "Nhanvien.h"
#include "PILOT.h"
#include <iomanip>

using namespace std;

Pilot::Pilot() :Nhanvien() {
	this->SoGioBay = 0;
	this->luongcanban = 0;
}
void Pilot::tinhluong() {
	this->luong = luongcanban + SoGioBay * 5000.0 * 1000.0;
}
void Pilot::nhap() {
	Nhanvien::nhap();
	cout << "Nhap so gio bay: ";
	cin >> SoGioBay;
	cout << "Nhap luong can ban: ";
	cin >> luongcanban;
}
void Pilot::xuat() {
	this->tinhluong();
	Nhanvien::xuat();
	cout << "\nLuong: " << setprecision(2) << fixed << this->luong << " Dong.";
	cout << endl;
}