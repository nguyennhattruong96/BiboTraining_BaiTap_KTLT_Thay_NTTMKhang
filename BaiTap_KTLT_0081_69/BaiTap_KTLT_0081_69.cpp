#include "BaiTap_KTLT_0081_69.h"

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

void Tong(int x, int n)
{
	int s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += pow(-1, (i)) * pow(x, (2 * i + 1));
	}

	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}

