#include "BaiTap_KTLT_0055.h"


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
	cout << "Ket qua la: " << n << endl;
}


int SoLuongChuSo(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int dem = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		dem++;

		soNguyen = soNguyen / 10;
	}

	return dem;
}
