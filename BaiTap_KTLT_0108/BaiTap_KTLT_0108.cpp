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

	cout << "Ket Qua Cua Phep Tinh " << x << " Luy Thua " << n << " La : " << s << endl;
}