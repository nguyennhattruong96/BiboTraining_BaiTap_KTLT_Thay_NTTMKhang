#include "BaiTap_KTLT_0090.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So 0 Hoac So Am Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}

void So_M(int n)
{
	int s = 0;
	int m = 0;

	do
	{
		m += 1;
		s += m;

	} while (s + m + 1 < n);

	cout << "So Nguyen Duong M La : " << m << endl;
}




