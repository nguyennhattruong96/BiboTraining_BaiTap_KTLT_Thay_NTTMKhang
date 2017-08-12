#include "BaiTap_KTLT_0032.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai " << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}


bool KiemTraSoChinhPhuong(int n)
{
	return (n == sqrt(n) * sqrt(n));
}
