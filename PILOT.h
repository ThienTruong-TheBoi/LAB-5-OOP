#pragma once
#include "Nhanvien.h"


class Pilot :public Nhanvien {
protected:
	float SoGioBay;
	double luongcanban;
public:
	Pilot();
	void tinhluong();
	void nhap();
	void xuat();
};