#include "BaiTap_KTLT_0029.h"


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


void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}


void UocSoLonNhat(int n)
{
	int s = 1;
	int max = 1;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			if (i > max)
			{
				max = i;
			}
		}
	}

	cout << "Uoc So Le Lon Nhat Cua " << n << " La : " << max << endl;
}
