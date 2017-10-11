#include "BaiTap_KTLT_0081_26.h"


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


void Tich(int x)
{
	int s = 1;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			if (i % 2 != 0)
			{
				s *= i;
			}
		}
	}

	cout << "Tich Uoc So Le Cua " << x << " La : " << s << endl;
}

