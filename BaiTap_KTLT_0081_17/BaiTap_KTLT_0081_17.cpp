#include "BaiTap_KTLT_0081_17.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hoac Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}



double Sum(int x, int n)
{
	double s = 0;
	double gt = 1;

	if (x == 0 && n == 0)
	{
		return 1;
	}

	else
	{
		for (int i = 1; i <= n; i++)
		{
			gt *= i;

			s += 1.0 * pow(x, i) / gt;

		}

		return s;

	}
}

