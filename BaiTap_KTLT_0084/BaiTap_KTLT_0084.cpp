#include "BaiTap_KTLT_0084.h"


int Input(string sMessage)
{
	int n;

	cout << sMessage;
	cin >> n;

	return n;
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
			cout << "Phuong Trinh Co Nghiem La X = 0" << endl;
		}

		else
		{
			x = (-b / a);
			cout << "Phuong Trinh Co Mot Nghiem La X = " << x << endl;
		}
	}
}

