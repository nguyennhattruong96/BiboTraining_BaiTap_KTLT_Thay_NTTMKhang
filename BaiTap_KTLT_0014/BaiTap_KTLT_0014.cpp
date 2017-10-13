#include "BaiTap_KTLT_0014.h"

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

double Tong(int x, int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += pow(x, (2 * i + 1));
	}

	return s;
}
