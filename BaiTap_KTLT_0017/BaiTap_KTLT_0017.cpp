#include "BaiTap_KTLT_0017.h"

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

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}


double Tong(int x, int n)
{
	double s = 0;
	int gt = 1;

	for (int i = 1; i <= n; i++)
	{
		gt = gt * i;

		s += 1.0 * pow(x, i) / gt;
	}

	return s;
}
