#include "BaiTap_KTLT_0114_055_c1.h"


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

int SoLuongChuSo(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int dem = 0;

	for (; soNguyen > 0;)
	{
		soDu = soNguyen % 10;

		dem++;

		soNguyen = soNguyen / 10;
	}

	return dem;
}
