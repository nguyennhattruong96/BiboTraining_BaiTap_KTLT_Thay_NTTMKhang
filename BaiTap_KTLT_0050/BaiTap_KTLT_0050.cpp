#include "BaiTap_KTLT_0050.h"


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

void SoNgichDao(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int ND = 0;
	while (soNguyen > 0)
	{
		soDu = soNguyen % 10;

		soNguyen = soNguyen / 10;

		ND = ND * 10 + soDu;
	}

	cout << "So Nghich Dao Cua Chu So Nguyen " << n << " La : " << ND << endl;
}
