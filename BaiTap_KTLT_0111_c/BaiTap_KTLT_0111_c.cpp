#include "BaiTap_KTLT_0111_c.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "Day Khong Phai Chieu Cao Cua Tam Giac Xin Nhap Lai " << endl;
		}
	} while (n <= 0);

	return n;
}

void TamGiacVuongCan(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j <= n-i)
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
