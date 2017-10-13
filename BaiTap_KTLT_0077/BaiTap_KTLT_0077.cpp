#include "BaiTap_KTLT_0077.h"


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

void Sum(int x)
{
	int s = 0;

	for (int i = 1; i <= x; i++)
	{
		s += i;
	}

	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}

