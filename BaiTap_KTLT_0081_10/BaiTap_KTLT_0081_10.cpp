#include "BaiTap_KTLT_0081_10.h"

int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void LuyThua(int x, int n)
{
	double kq;

	kq = pow(x, n);

	cout << "Ket Qua Cua Phep Luy Thua La : " << kq << endl;
}

