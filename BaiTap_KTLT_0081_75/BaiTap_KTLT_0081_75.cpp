#include "BaiTap_KTLT_0081_75.h"

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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


bool KiemTra2k(int x)
{
	double k = log10((double)x) / log10(2.0);

	if (k == (int)k)
	{
		return true;
	}

	else
	{
		return false;
	}
}


