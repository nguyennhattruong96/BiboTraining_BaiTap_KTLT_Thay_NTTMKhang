#include "BaiTap_KTLT_0114_001_c1.h"


int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "Day La So Am Hoac So 0 Xin Nhap Lai " << endl;
		}
	} while (n <= 0);

	return n;
}

void TinhTong(int n)
{
	int s = 0;
	for (int  i = 1; i <= n ; i++)
	{
		s += i;
	}
	cout << "Ket Qua Cua Phep Tinh La: " << s << endl;
}


