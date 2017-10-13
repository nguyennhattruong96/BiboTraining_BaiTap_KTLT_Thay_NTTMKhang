#include "BaiTap_KTLT_0024.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac La So 0 Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}

void UocSoLe(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				cout << "So Uoc So Le Cua " << n << " La: " << i << endl;
			}
		}
	}
}
