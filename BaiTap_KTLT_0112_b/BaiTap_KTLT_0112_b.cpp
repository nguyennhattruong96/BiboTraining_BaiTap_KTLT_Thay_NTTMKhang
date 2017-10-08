#include "BaiTap_KTLT_0112_b.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "Day Khong Phai La Canh Cua Mot Hinh Chu Nhat Xin Nhap Lai" << endl;
		}
	} while (n <= 0);

	return n;
}

void HinhChuNhatRong(int cd, int cr)
{
	if (cr > cd)
	{
		cr += cd;
		cd = cr - cd;
		cr -= cd;
	}
	for (int i = 0; i < cr; i++)
	{
		for (int  j = 0; j < cd; j++)
		{
			if (i == 0 || j == 0 || i == cr - 1 || j == cd - 1)
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
}
