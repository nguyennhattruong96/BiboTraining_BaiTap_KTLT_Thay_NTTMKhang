#include "BaiTap_KTLT_0114_044_c1.h"

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
	int x = n;
	int s = 0;

	for ( ; n > 0; )
	{
		int soNguyen = n % 10;

		s += soNguyen;

		n = n / 10;
	}

	cout << "Tong Cua Tat Ca Cac Chu So Cua "<< x <<" La : " << s << endl;
}
