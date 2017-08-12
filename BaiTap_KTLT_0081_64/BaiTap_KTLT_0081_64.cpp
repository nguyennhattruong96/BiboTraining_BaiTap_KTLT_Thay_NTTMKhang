#include "BaiTap_KTLT_0081_64.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void GiaiPhuongTrinhBacNhat(float a, float b)
{
	float x;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Phuong Trinh Vo So Nghiem" << endl;
		}

		else
		{
			cout << "Phuong Trinh Vo Nghiem" << endl;
		}
	}

	else
	{
		if (b == 0)
		{
			cout << "Phuong Trinh co Nghiem la 0" << endl;
		}

		else
		{
			x = (-b / a);
			cout << "Phuong Trinh Co 1 Nghiem la: " << x << endl;
		}
	}
}
