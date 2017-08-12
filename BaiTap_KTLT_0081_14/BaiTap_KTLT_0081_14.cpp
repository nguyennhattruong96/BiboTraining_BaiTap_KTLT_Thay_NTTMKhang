#include "BaiTap_KTLT_0081_14.h"


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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void Sum(int x, int n)
{
	double s = 0;

	for (int i = 0; i <= n; i++)
	{
		s += pow(x, (2 * i + 1));
	}

	cout << "Ket qua la: " << s << endl;
}

