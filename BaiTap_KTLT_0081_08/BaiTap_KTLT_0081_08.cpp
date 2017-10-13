#include "BaiTap_KTLT_0081_08.h"


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
	int s = 0;
	for (int i = 0; i <= x; i++)
	{
		s += 1.0 * ((2 * i) + 1) / ((2 * i) + 2);
	}
	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}

