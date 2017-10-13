#include "BaiTap_KTLT_0114_037_c1.h"

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

double TinhTong(int n)
{
	double s = sqrt(2.0);

	for (int i = 3; i <= n; i++)
	{
		s = pow(1.0 * (i + s), 1.0 / i);
	}

	return s;
}

