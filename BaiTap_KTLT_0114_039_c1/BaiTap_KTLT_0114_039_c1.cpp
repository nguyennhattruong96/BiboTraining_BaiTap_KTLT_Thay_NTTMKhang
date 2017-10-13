#include "BaiTap_KTLT_0114_039_c1.h"

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

double TinhTong(int n)
{
	double s = 0;
	double giaiThua = 1;

	for (int i = 1; i <= n; i++)
	{
		giaiThua = giaiThua * i;

		s = pow(1.0 * (giaiThua + s), 1.0 / (i + 1));
	}

	return s;
}

