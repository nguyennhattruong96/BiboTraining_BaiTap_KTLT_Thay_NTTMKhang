#include "BaiTap_KTLT_0108.h"

double Input(string sMessage)
{
	double n;

	cout << sMessage;
	cin >> n;

	return n;
}

void LuyThua(double x, double n)
{
	double s = 0;

	s = pow(x, n);

	cout << "Ket qua cua " << x << " luy thua " << n << " la : " << s << endl;
}