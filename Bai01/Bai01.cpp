#include<iostream>
#include<conio.h>
#include"CPhanSo.h"
using namespace std;
void main()
{
	//CPhanSo* x = new CPhanSo();
	//cout << "Nhap phan so x" << endl;
	//x->Nhap();

	//CPhanSo* y = new CPhanSo();
	//cout << "\nNhap phan so y" << endl;
	//y->Nhap();

	CPhanSo* x = new CPhanSo(1, 2);
	CPhanSo* y = new CPhanSo(3, 4);

	CPhanSo* Tong = x->Cong(y);
	cout << "\nx + y = ";
	Tong->Xuat();
	delete Tong;

	CPhanSo* Hieu = x->Tru(y);
	cout << "\nx - y = ";
	Hieu->Xuat();
	delete Hieu;

	CPhanSo* Tich = x->Nhan(y);
	cout << "\nx * y = ";
	Tich->Xuat();
	delete Tich;

	CPhanSo* Thuong = x->Chia(y);
	cout << "\nx / y = ";
	Thuong->Xuat();
	delete Thuong;

	delete x;
	delete y;

	_getch();
}