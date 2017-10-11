#include "BaiTap_KTLT_0096.h"

int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void Output(int n)
{
	cout << "ket qua la: " << n << endl;
}

void HePhuongTrinh(float x)
{
	double s;
	if (x >= 5)
	{
		s = 2 * x*x + 5 * x + 9;
	}
	else
	{
		s = -2 * x*x + 4 * x - 9;
	}

	cout << "Ket Qua Khi Giai He Phuong Trinh La : " << s << endl;
}



