#include "BaiTap_KTLT_0010.h"


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


double LuyThua(int x, int n)
{
	long double mu = 1;

	for (int i = 1; i <= n; i++)
	{
		mu *= x;
	}

	return mu;
}





