#include "BaiTap_KTLT_0114_060_c1.h"


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

bool KiemTraTang(int n)
{
	int soNguyen = n;
	int soDu = 0;

	int soTruoc = soNguyen % 10;
	soNguyen = soNguyen / 10;

	for (; soNguyen > 0;)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;
	}

	if (soTruoc < soDu)
	{
		return false;
	}

	else
	{
		return true;
	}
}
