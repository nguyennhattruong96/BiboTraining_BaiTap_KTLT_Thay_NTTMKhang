#include "BaiTap_KTLT_0095.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void TriTuyetDoi(int a, int b, int c)
{
	if (a < 0)
	{
		a = a * -1;
	}

	if (b < 0)
	{
		b = b * -1;
	}

	if (c < 0)
	{
		c = c * -1;
	}

	cout << a << endl << b << endl << c << endl;
}



