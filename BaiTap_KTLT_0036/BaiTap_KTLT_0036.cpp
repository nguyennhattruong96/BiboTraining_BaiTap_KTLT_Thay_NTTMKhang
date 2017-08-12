#include "BaiTap_KTLT_0036.h"


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
	cout << "ket qua la:" << n << endl;
}


double sum(int n)
{
	double s = sqrt(1.0);
	double GiaiThua = 1;

	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			GiaiThua = GiaiThua * i;

			s = sqrt(GiaiThua + s);
		}

		return s;
	}

}
