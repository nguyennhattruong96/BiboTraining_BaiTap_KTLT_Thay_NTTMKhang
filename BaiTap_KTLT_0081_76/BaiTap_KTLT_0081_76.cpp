#include "BaiTap_KTLT_0081_76.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "So Nhap Vao La So Am Hoac So 0 Hay Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}

bool KiemTra3k(int x)
{
	while (x != 0)
	{
		if (x % 3 == 0)
		{
			return true;
		}

		else
		{
			return false;
		}
	}
}

