#ifndef NHANVIEN
#define NHANVIEN

#include <iostream>
#include <string>

using namespace std;

class Nhanvien {
protected:
	string Hoten;
	string ngaysinh;
	double luong;
public:
	Nhanvien();
	void nhap();
	void xuat();
};

#endif // !NHANVIEN
