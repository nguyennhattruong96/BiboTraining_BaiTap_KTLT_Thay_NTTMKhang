#include "BaiTap_KTLT_0020.h"


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
	cout << "ket qua la:" << n << endl;
}

void UocSo(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << "Uoc So Chung Cua " << n << " La : " << i << endl;
		}
	}
}
