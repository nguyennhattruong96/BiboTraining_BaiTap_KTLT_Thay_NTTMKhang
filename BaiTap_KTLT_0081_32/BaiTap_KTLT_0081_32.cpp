#include "BaiTap_KTLT_0081_32.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai " << endl;
		}

	} while (n < 0);

	return n;
}

bool KiemTraSoChinhPhuong(int n)
{
	return (n == sqrt(n) * sqrt(n));
}

