#include "BaiTap_KTLT_0114_046_c1.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So O Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}

void SoLuongChuSoLe(int n)
{
	int dem = 0;
	int x = n;

	for (; n > 0; )
	{
		int soNguyen = n % 10;

		if (soNguyen % 2 != 0)
		{
			dem++;
		}

		n = n / 10;
	}

	cout << "So Luong Chu So Le Cua "<< x << " La : " << dem << endl;
}
