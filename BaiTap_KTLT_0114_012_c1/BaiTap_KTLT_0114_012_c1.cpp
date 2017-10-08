#include "BaiTap_KTLT_0114_012_c1.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}


//double Mu(int x, int n)
//{
//	long double mu = 1;
//
//	for (int i = 1; i <= n; i++)
//	{
//		mu *= x;
//	}
//	return mu;
//}
//


double TinhTong(int x, int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += pow(x, i);
	}

	return s;
}

