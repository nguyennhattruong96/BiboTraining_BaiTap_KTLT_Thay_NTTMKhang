#include "BaiTap_KTLT_0015.h"

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

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

double Sum(int n)
{
	double s = 0;
	int mau = 1;

	for (int i = 1; i <= n; i++)
	{
		s += 1.0 / mau;

		mau += i;
	}

	return s;
}
