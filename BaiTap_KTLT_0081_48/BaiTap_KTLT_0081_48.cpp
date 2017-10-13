#include "BaiTap_KTLT_0081_48.h"


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

void Tich(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int s = 1;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu % 2 != 0)
		{
			s *= soDu;
		}

		soNguyen = soNguyen / 10;
	}

	cout << "Tich Tat Ca Cac Chu So Le Trong So Nguyen Duong " << n << " La : " << s << endl;
}
