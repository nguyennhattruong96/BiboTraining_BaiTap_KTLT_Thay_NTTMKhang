#include "BaiTap_KTLT_0114_009_c1.h"


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



void TinhTich(int n)
{
	double s = 1;

	for (int i = 1; i <= n; i++)
	{
		s = s * i;
	}

	cout << "Ket Qua Phep Toan La : " << s << endl;
}





