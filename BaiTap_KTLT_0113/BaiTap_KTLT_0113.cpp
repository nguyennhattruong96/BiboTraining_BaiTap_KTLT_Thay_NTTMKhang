#include "BaiTap_KTLT_0113.h"


float Inputx(string sMessage)
{
	float x;

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
			cout << "So N Nho Hon Bang 0 Xin Nhap Lai " << endl;
		}

	} while (n <= 0);
	return n;
}

int GiaiThua(int n)
{
	int gt = 1;
	for (int i = 2; i <= n; i++)
	{
		gt *= i;
	}
	return gt;
}

void TinhSin(float x, int n)
{
	float sin = x;
	for (int i = 1; i <= n; i++)
	{
		sin += pow(-1,i)*pow(x, 2 * i + 1) / GiaiThua(2 * i + 1);
	}
	cout << "Sin(" << x << ") = " << sin << endl;
}
