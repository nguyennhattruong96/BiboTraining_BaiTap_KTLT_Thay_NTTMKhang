#include "BaiTap_KTLT_0027.h"


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

void SoLuongUocSoChang(int n)
{
	int dem = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 == 0)
			{
				dem++;
			}
		}
	}

	cout << "So Luong Uoc So Chang Cua " << n << " La : " << dem << endl;
}
