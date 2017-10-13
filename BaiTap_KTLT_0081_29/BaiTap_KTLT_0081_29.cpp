#include "BaiTap_KTLT_0081_29.h"


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

void MaxLe(int x)
{
	int max = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			if (i % 2 != 0)
			{
				if (i > max)
				{
					max = i;
				}
			}
		}
	}

	cout << "So Le Lon Nhat Trong Tat Ca Cac Uoc So Le Cua " << x << " La : " << max << endl;
}

