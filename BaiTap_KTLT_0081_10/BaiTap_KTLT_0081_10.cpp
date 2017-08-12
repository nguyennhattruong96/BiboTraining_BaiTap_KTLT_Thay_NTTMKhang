#include "BaiTap_KTLT_0081_10.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}


void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}


void LuyThua(int x, int n)
{
	double kq;

	kq = pow(x, n);

	cout << "Ket qua la: " << kq << endl;
}

