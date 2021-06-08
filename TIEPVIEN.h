#pragma once
#include "Nhanvien.h"


class TiepVien :public Nhanvien {
protected:
	int SoChuyen;
public:
	TiepVien();
	void tinhluong();
	void nhap();
	void xuat();
};