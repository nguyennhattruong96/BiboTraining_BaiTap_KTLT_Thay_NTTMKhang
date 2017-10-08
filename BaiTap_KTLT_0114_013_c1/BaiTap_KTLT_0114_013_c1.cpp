#include "BaiTap_KTLT_0114_013_c1.h"


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

	for (int i = 1; i <= n; i++)
	{
		s += pow(x, (2 * i));
	}

	return s;
}

