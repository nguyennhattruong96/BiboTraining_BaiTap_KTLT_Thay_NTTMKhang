#include "BaiTap_KTLT_0082.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void So_Max(int a, int b, int c)
{
	int max = a;

	if (max < b)
	{
		max = b;
	}

	if (max  < c)
	{
		max = c;
	}

	cout << "So Lon Nhat Trong Ba So "<< a  << "," << b << "," << c <<" La : " << max << endl;

}

