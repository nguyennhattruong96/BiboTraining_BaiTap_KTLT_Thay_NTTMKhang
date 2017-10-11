#include "BaiTap_KTLT_0107.h"

int Inputx(string sMessage)
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

		if (n < 2)
		{
			cout << "So Nhap Vao La So Nho Hon Hai Xin Nhap Lai " << endl;
		}

	} while (n < 2);

	return n;
}

void CangBacN(float x, int n)
{
	float s = 0;

	s = pow(abs(x), 1.0 / n);

	if (x > 0)
	{
		cout << "Can Bac " << n << " Cua " << x << " La : " << s << endl;
	}
	else
	{
		cout << "Can Bac " << n << " Cua " << x << " La : " <<"-" << s << endl;
	}
}

