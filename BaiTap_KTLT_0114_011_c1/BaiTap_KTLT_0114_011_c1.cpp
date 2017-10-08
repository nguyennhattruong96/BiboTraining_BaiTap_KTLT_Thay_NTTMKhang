#include "BaiTap_KTLT_0114_011_c1.h"

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



double TongGiaiThua(int n)
{
	double s = 0;
	int gt = 1;

	for (int i = 1; i <= n; i++)
	{
		gt = gt * i;

		s += gt;
	}

	return s;
}

