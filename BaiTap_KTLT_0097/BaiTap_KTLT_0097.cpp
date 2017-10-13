#include "BaiTap_KTLT_0097.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void KiemTraTamGiac(int a, int b, int c)
{
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		if ((a == b) && (b == c))
		{
			cout << "Tam Giac Nay La Tam Giac Deu" << endl;
		}
		else
		{
			if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
			{
				cout << "Tam Giac Nay La Tam Giac Vuong" << endl;
			}

			if ((a == b) || (b == c) || (c == a))
			{
				cout << "Tam Giac Nay La Tam Giac Can" << endl;
			}
		}

	}
	else
	{
		cout << "Day Khong Phai Ba Canh Cua Mot Tam Giac" << endl;
	}
}



