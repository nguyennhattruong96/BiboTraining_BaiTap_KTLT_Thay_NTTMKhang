#include "BaiTap_KTLT_0081_06.h"


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


void Sum(int x)
{
	double s = 0;

	for (int i = 1; i <= x; i++)
	{
		s += 1.0 / (i * (i + 1));
	}

	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}

