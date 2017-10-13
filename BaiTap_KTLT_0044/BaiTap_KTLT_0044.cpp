#include "BaiTap_KTLT_0044.h"

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

void TongChuSo(int n)
{
	int s = 0;

	while (n > 0)
	{
		int SoNguyen = n % 10;

		s += SoNguyen;

		n = n / 10;
	}

	cout << "Tong Cua Tat Ca Cac Chu So La : " << s << endl;
}
