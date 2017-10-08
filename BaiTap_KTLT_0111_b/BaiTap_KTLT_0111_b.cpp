#include "BaiTap_KTLT_0111_b.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0 )
		{
			cout << "Day Khong Phai La Do Cao Cua Mot Tam Giac Xin Nhap Lai " << endl;
		}

	} while (n <=0 );
	return n;
}

void TamGiacCanRong(int n)
{
	int k = n - 1;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (j == k - i || j == k + i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	for (int i = 0; i < 2*n-1; i++)
	{
		cout << "*";
	}
}



