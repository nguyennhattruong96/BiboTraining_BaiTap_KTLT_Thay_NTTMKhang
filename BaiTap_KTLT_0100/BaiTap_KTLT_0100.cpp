#include "BaiTap_KTLT_0100.h"

int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
}

void GiaiPhuongTrinhBacHai(float a, float b, float c)
{
	float x1, x2, x;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
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
			if (c == 0)
			{
				cout << "Phuong Trinh Co Nghiem la : X = 0" << endl;
			}

			else
			{
				x = (-c / b);
				cout << "Phuong Trinh Co Mot Nghiem La : X = " << x << endl;
			}
		}
	}

	else
	{
		float Delta = b * b - 4 * a*c;

		if (Delta < 0)
		{
			cout << "Phuong Trinh Vo Nghiem" << endl;
		}

		else
		{
			if (Delta == 0)
			{
				x1 = x2 = -b / 2 * a;
				cout << "Phuong Trinh Co Nghiem Kep : X1 = X2 = " << x1 << endl;
			}

			else
			{
				x1 = (-b + sqrt(Delta)) / (2 * a);
				x2 = (-b - sqrt(Delta)) / (2 * a);

				cout << "Phuong Trinh Co Nghiem La : X1 = " << x1 << endl;
				cout << "Phuong Trinh Co Nghiem La : X2 = " << x2 << endl;
			}
		}
	}
}


