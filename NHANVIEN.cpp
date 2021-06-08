#include <iostream>
#include<string>
#include "Nhanvien.h"

using namespace std;

Nhanvien::Nhanvien() {
	this->Hoten = "";
	this->ngaysinh = "";
	this->luong = 0;
}
void Nhanvien::nhap() {
	cout << "Nhap Hoten: ";
	getline(cin, this->Hoten);
	cout << "Nhap ngaysinh: ";
	getline(cin, this->ngaysinh);
}
void Nhanvien::xuat() {
	cout << "\nHo ten: " << this->Hoten << " ";
	cout << "\nNgay sinh: " << this->ngaysinh << " ";
}