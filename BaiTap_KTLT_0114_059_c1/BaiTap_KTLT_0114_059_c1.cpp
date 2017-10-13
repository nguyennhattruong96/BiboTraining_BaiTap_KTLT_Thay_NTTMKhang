#include "BaiTap_KTLT_0114_059_c1.h"


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

int SoNgichDao(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int ND = 0;

	for (; soNguyen > 0;)
	{
		soDu = soNguyen % 10;

		soNguyen = soNguyen / 10;

		ND = ND * 10 + soDu;
	}

	return ND;
}


bool SoDoiXung(int n)
{
	return(n == SoNgichDao(n));
}
