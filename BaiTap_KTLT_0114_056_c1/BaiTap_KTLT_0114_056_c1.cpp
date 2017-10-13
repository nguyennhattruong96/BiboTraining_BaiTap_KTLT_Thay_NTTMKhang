#include "BaiTap_KTLT_0114_056_c1.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}

bool KiemTraSoLe(int n)
{
	int soNguyen = n;
	int soDu = 0;

	for (; soNguyen > 0;)
	{
		soDu = soNguyen % 10;

		if (soDu % 2 != 0)
		{
			return true;
		}

		return false;

		soNguyen = soNguyen / 10;
	}
}
