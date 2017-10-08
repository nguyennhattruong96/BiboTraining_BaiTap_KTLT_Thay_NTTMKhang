#include "BaiTap_KTLT_0111_d.h"



int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "Day Khong Phai La Chieu Cao Cua Mot Tam Giac Xin Nhap Lai" << endl;
		}
	} while (n <= 0);

	return n;
}

void TamVuongGiacCanRong(int n)
{
	n--;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j + i == n || j == 0)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i <= n; i++)
	{
		cout << " *";
	}
	cout << endl;
}
