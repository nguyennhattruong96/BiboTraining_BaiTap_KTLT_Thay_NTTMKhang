#include "BaiTap_KTLT_0081_07.h"


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

void Sum(int x)
{
	double s = 0;

	for (int i = 1; i <= x; i++)
	{
		s += (1.0 * i) / (i + 1);
	}

	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}

