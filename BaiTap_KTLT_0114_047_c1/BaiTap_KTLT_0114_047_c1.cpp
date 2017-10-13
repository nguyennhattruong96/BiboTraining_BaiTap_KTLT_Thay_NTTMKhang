#include "BaiTap_KTLT_0114_047_c1.h"


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

void TongChuSoChang(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int s = 0;

	for ( ; soNguyen > 0; )
	{
		soDu = soNguyen % 10;

		soNguyen = soNguyen / 10;

		if (soDu % 2 == 0)
		{
			s += soDu;
		}
	}

	cout << "Tong Tat Ca Cac Chu So Chan Cua " << n << " La : " << s << endl;
}
