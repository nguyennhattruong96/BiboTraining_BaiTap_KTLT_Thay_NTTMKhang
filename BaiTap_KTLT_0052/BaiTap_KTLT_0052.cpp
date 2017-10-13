#include "BaiTap_KTLT_0052.h"


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

bool KiemTraSoNhoNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int min = 9;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu < min)
		{
			min = soDu;
		}

		soNguyen = soNguyen / 10;
	}

	return min;
}
