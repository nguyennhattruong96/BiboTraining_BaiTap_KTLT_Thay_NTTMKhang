#include "BaiTap_KTLT_0058.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


bool KiemTraSoChang(int n)
{
	int soNguyen = n;
	int soDu = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu % 2 != 0)
		{
			return false;
		}

		return true;

		soNguyen = soNguyen / 10;
	}
}
