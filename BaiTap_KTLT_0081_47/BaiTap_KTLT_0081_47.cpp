#include "BaiTap_KTLT_0081_47.h"


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


void TongChuSoChang(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int s = 1;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu % 2 == 0)
		{
			s += soDu;
		}

		soNguyen = soNguyen / 10;
	}

	cout << "Tong Tat Ca Cac So Chang Trong So Nguyen Duong " << n << " La : " << s << endl;
}

