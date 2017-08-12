#include "BaiTap_KTLT_0087.h"


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

void So_N(int n)
{
	int s = 0;

	while (s < 1000)
	{
		n++;
		s = s + n;
	}

	cout << "So n La : " << n << endl;
}



