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

	cout << "So Luong Chu So Cua So " << x << " La : " << dem << endl;
}

