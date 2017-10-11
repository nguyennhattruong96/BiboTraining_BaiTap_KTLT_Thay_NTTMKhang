#include "BaiTap_KTLT_0114_026_c1.h"


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


void TichUocSole(int n)
{
	int s = 1;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				s = s * i;
			}
		}
	}

	cout << "Tich Tat Ca Uoc So Le Cua " << n << " La: " << s << endl;
}

