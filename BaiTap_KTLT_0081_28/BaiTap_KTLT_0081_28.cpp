#include "BaiTap_KTLT_0081_28.h"

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


void Sum(int x)
{
	int s = 0;

	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			s += i;
		}
	}

	cout << "Tong Uoc So Chang Cua " << x << " La : " << s << endl;
}


