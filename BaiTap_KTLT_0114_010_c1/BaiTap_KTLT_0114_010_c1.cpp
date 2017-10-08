#include "BaiTap_KTLT_0114_010_c1.h"



int Inputx(string sMessage)
{
	int x;

	cout << sMessage;
	cin >> x;

	return x;
}

int Inputn(string sMessage)
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



double LuyThua(int x, int n)
{
	long double mu = 1;

	for (int i = 1; i <= n; i++)
	{
		mu *= x;
	}

	return mu;
}





