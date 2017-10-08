#include "BaiTap_KTLT_0112_a.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;
		if (n <= 0)
		{
			cout << "Day Khong Phai La Mot Canh Cua Hinh Chu Nhat Xin Nhap Lai" << endl;
		}

	} while (n <= 0);

	return n;
}

void HinhChuNhat(int cd, int cr)
{
	if (cr > cd)
	{
		cr += cd;
		cd = cr - cd;
		cr -= cd;
	}
	for (int i = 0; i < cr; i++)
	{
		for (int j = 0; j < cd; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}
