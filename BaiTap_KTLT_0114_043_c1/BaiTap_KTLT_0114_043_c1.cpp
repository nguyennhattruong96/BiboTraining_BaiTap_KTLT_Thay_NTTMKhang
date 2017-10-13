#include "BaiTap_KTLT_0114_043_c1.h"

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

void DemChuSo(int n)
{
	int x = n;
	int dem = 0;

	for( ; n > 0 ;)
	{
		int soNguyen = n % 10;

		dem++;

		n = n / 10;

	}

	cout << "So Luong Chu So Cua "<< x << " La : " << dem << endl;
}
