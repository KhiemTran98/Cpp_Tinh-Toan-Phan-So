class CPhanSo
{
private:
	int Tu, Mau;
public:
	CPhanSo();
	CPhanSo(int Tu, int Mau);
	~CPhanSo();
	void Nhap();
	void Xuat();
	void RutGon();
	CPhanSo* Cong(CPhanSo* x);
	CPhanSo* Tru(CPhanSo* x);
	CPhanSo* Nhan(CPhanSo* x);
	CPhanSo* Chia(CPhanSo* x);
};