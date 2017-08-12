#include "BaiTap_KTLT_0081_37.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 2)
		{
			cout << "Hay Nhap Vao So Lon Hon Bang 2" << endl;
		}

	} while (n < 2);

	return n;
}


void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}


double Sum(int n)
{
	double s = sqrt(2.0);

	for (int i = 3; i <= n; i++)
	{
		s = pow(1.0 * (i + s), 1.0 / i);
	}

	return s;
}

