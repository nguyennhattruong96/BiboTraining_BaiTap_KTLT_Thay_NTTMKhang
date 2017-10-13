#include "BaiTap_KTLT_0081_54.h"

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

void SoLuongSoNhoNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int min = 9;
	int dem = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu < min)
		{
			min = soDu;
		}

		if (soDu == min)
		{
			dem++;
		}

		soNguyen = soNguyen / 10;
	}

	cout << "So Luong Chu So Nho Nhat Trong Day So nguyen Duong  " << n << " La : " << dem << endl;
}
