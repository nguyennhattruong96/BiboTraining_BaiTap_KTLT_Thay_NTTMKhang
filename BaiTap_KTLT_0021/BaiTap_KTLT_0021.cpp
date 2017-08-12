#include "BaiTap_KTLT_0021.h"

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
	cout << "ket qua la: " << n << endl;
}


void TongUocSo(int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			s += i;
		}
	}

	cout << "Tong cua tat ca uoc so cua " << n << " la: " << s << endl;
}
