#include "BaiTap_KTLT_0045.h"

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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}


void TichChuSo(int n)
{
	int s = 1;

	while (n > 0)
	{
		int SoNguyen = n % 10;

		s *= SoNguyen;

		n = n / 10;
	}

	cout << "Tich Cua Tat Ca Cac Chu So La : " << s << endl;
}
