#include "BaiTap_KTLT_0081_72.h"

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

double Tong(int x, int n)
{
	double s = 0;
	int GT = 1;

	for (int i = 1; i <= n; i++)
	{
		GT = GT * i;

		s += pow(-1, (i)) * (pow(x, i) / GT);
	}

	return s;
}

