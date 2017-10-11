#include "BaiTap_KTLT_0114_035_c1.h"

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
	double s = sqrt(n);


	for (int i = n - 1; i >= 1; i--)
	{
		s = sqrt(i + s);
	}

	return s;
}
