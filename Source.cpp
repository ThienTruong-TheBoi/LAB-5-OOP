#include <iostream>
#include <stdio.h>
#include "Nhanvien.h"
#include "PILOT.h"
#include "TIEPVIEN.h"

using namespace std;

int main() {
	int sonhanvien;
	cout << "Nhap tong so nhan vien: ";
	cin >> sonhanvien;
	Nhanvien** danhsach = new Nhanvien * [sonhanvien];
	for (int i = 0; i < sonhanvien; ++i) {
		int kt;
		cout << "\nNhap nghe cua nv thu " << i + 1 << ":\n\t1. Tiep vien\n\t2. Phi cong\n\tChon:";
		cin >> kt;
		cin.ignore();
		cout << "Nhap info nhan vien thu " << i + 1 << endl;

		if (kt == 1) {
			danhsach[i] = new TiepVien();
			danhsach[i]->nhap();
		}

		else {
			danhsach[i] = new Pilot();
			danhsach[i]->nhap();
		}
	}

	for (int i = 0; i < sonhanvien; ++i) {
		cout << "Thong tin cua nhan vien thu " << i + 1 << "\n";
		danhsach[i]->xuat();
	}
	return 0;
}