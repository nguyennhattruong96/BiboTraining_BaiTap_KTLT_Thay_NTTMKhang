#include "BaiTap_KTLT_0081_49.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}


void SoDauTien(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int f = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		f = soDu;

		soNguyen = soNguyen / 10;
	}

	cout << "Chu So Dau Tien Trong Day So Nguyen Duong " << n << " La : " << f << endl;
}

