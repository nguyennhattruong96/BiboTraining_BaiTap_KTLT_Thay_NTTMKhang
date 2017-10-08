#include "BaiTap_KTLT_0114_008_c1.h"


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

void TinhTong(int n)
{
	double s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += (2 * i + 1) * 1.0 / (2 * i + 2);
	}

	cout << "Ket Qua Phep Toan La : " << s << endl;
}





