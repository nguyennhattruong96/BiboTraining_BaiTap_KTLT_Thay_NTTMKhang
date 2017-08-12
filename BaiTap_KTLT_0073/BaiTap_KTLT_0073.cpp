#include "BaiTap_KTLT_0073.h"


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
	int s = -1;
	int j = 2;
	double SoHang = -1;
	for (int i = 1;;)
	{
		SoHang = -1.0*x*x / (j*(j - 1));
		s += SoHang;
		j += 2;
	}

	return s;
}

