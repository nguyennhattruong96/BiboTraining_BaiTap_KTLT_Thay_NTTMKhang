#include "BaiTap_KTLT_0081_61.h"


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

bool KiemTraGiam(int n)
{
	int soNguyen = n;
	int soDu = 0;

	int soTruoc = soNguyen % 10;
	soNguyen = soNguyen / 10;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;
	}

	if (soTruoc < soDu)
	{
		return true;
	}

	else
	{
		return false;
	}
}
