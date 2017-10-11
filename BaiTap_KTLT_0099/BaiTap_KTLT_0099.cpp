#include "BaiTap_KTLT_0099.h"

int Input(string sMessage)
{
	int n;
	
	cout << sMessage;
	cin >> n;

	return n;
}

void Ouput(int n)
{
	cout << "Ket qua la:" << n << endl;
}

void InSoTang(int a, int b, int c)
{
	int temp;

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	cout << "Day So Tang :" << a <<" " << b <<" " << c << endl;
}