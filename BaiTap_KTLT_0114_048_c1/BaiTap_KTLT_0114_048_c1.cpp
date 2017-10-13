#include "BaiTap_KTLT_0114_048_c1.h"


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

void TichChuSoLe(int n)
{
	int soNguyen = n;
	int soDu = 0;
	int dem = 0;
	int s = 1;

	for (; soNguyen > 0;)
	{
		soDu = soNguyen % 10;

		soNguyen = soNguyen / 10;

		if (soDu % 2 != 0)
		{
			dem++;
			s *= soDu;
		}
	}

	if (dem == 0)
	{
		cout << "Khong Co Chu So Le" << endl;
	}
	else
	{

		cout << "Tich Cua Tat Ca Chu So Le " << n << " La : " << s << endl;
	}
}
