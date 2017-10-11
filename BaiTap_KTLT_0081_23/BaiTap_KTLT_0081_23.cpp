#include "BaiTap_KTLT_0081_23.h"


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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void DemSoLuongUocSo(int x)
{
	int dem = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			dem++;
		}
	}

	cout << "So Luong Uoc So Cua " << x << " La : " << dem << endl;
}

