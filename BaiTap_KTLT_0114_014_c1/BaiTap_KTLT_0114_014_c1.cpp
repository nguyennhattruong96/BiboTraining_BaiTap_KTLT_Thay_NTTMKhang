#include "BaiTap_KTLT_0114_014_c1.h"

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



double TinhTong(int x, int n)
{
	int s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += pow(x, (2 * i + 1));
	}

	return s;
}

