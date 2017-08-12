#include "BaiTap_KTLT_0081_70.h"

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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


double Tong(int x)
{
	double s = 0;
	int mau = 0;

	for (int i = 1; i <= x; i++)
	{
		mau = mau + i;
		s += pow(-1, (i + 1)) * (1.0 / mau);

	}

	return s;
}


