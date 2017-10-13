#include "BaiTap_KTLT_0081_56.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "so ban nhap la so nho hon hay nhap vao so khac" << endl;
		}

	} while (n < 0);

	return n;
}

bool KiemTraSoLe(int n)
{
	int soNguyen = n;
	int soDu = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu % 2 != 0)
		{
			return true;
		}

		return false;

		soNguyen = soNguyen / 10;
	}
}
