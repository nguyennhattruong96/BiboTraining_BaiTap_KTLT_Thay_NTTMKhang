#include "BaiTap_KTLT_0081_79.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhao Vao La So Am Hoac So 0 Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void DemSoLuong(int x)
{
	int soNguyen = x;
	int soDu = 0;
	int dem = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		dem++;

		soNguyen = soNguyen / 10;
	}

	cout << "So luong cua so nguyen " << x << " la: " << dem << endl;
}

