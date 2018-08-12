#include<iostream>
#include"CPhanSo.h"
#include"CDungChung.h"
using namespace std;
CPhanSo::CPhanSo()
{
	Tu = 0;
	Mau = 1;
}
CPhanSo::CPhanSo(int Tu, int Mau)
{
	this->Tu = Tu;
	this->Mau = Mau;
}
CPhanSo::~CPhanSo() {}
void CPhanSo::Nhap()
{
	cout << "Nhap tu: ";
	cin >> Tu;
	cout << "Nhap mau: ";
	cin >> Mau;
}
void CPhanSo::Xuat()
{
	cout << Tu << "/" << Mau;
}
void CPhanSo::RutGon()
{
	int UCLN = TimUCLN(Tu, Mau);
	Tu = Tu / UCLN;
	Mau = Mau / UCLN;
	if (Mau < 0)
	{
		Tu *= -1;
		Mau *= -1;
	}
}
CPhanSo* CPhanSo::Cong(CPhanSo* x)
{
	CPhanSo* Tong = new CPhanSo();
	Tong->Tu = this->Tu * x->Mau + x->Tu * this->Mau;
	Tong->Mau = this->Mau * x->Mau;
	Tong->RutGon();
	return Tong;
}
CPhanSo* CPhanSo::Tru(CPhanSo* x)
{
	CPhanSo* Hieu = new CPhanSo();
	Hieu->Tu = this->Tu * x->Mau - x->Tu * this->Mau;
	Hieu->Mau = this->Mau * x->Mau;
	Hieu->RutGon();
	return Hieu;
}
CPhanSo* CPhanSo::Nhan(CPhanSo* x)
{
	CPhanSo* Tich = new CPhanSo();
	Tich->Tu = this->Tu * x->Tu;
	Tich->Mau = this->Mau * x->Mau;
	Tich->RutGon();
	return Tich;
}
CPhanSo* CPhanSo::Chia(CPhanSo* x)
{
	CPhanSo* Thuong = new CPhanSo();
	Thuong->Tu = this->Tu * x->Mau;
	Thuong->Mau = this->Mau * x->Tu;
	Thuong->RutGon();
	return Thuong;
}