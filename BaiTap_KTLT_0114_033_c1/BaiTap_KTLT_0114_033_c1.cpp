#include "BaiTap_KTLT_0114_033_c1.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai " << endl;
		}

	} while (n <= 0);

	return n;
}


void TinhTong(int n)
{
	double s = 0;

	for (int i = 1; i <= n; i++)
	{
		s = sqrt(2 + s);
	}

	cout << "Ket Qua Cua Phep Toan La : " << s << endl;
}


