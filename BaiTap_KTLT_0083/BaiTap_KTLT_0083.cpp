#include "BaiTap_KTLT_0083.h"

int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}



void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


bool KiemTraCungDau(int a, int b)
{
	if (a * b > 0)
	{
		return true;
	}

	else
	{
		return false;
	}
}
