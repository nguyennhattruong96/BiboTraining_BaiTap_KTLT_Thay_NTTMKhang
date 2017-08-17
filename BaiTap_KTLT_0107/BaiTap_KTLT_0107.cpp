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
			cout << "So nhap vao la so nho hon 2 hay nhap lai " << endl;
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
		cout << "Can bac " << n << " cua " << x << " la : " << s << endl;
	}
	else
	{
		cout << "Can bac " << n << " cua " << x << " la : " <<"-" << s << endl;
	}
}

