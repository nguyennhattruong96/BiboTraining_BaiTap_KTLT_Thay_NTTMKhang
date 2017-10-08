#include "BaiTap_KTLT_0114_015_c1.h"

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap lai" << endl;
		}

	} while (n < 0);

	return n;
}


double TinhTong (int n)
{
	double s = 0;
	int mau = 0;

	for (int i = 1; i <= n; i++)
	{

		mau += i;
		s += 1.0 / mau;
	}

	return s;
}

