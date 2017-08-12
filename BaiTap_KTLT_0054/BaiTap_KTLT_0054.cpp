#include "BaiTap_KTLT_0054.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 0)
		{
			cout << "So Nhap Vao La So Am Hay Nhap Lai" << endl;
		}

	} while (n < 0);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


bool KiemTraSoNhoNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int min = 9;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu < min)
		{
			min = soDu;
		}

		soNguyen = soNguyen / 10;
	}

	return min;
}


int SoLuongSoNhoNhat(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int x = KiemTraSoNhoNhat(n);
	int dem = 0;

	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		if (soDu == x)
		{
			dem++;
		}

		soNguyen = soNguyen / 10;
	}

	return dem;
}

