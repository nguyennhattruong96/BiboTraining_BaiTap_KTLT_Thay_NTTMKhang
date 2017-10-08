#include "BaiTap_KTLT_0114_005_c1.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;
		
		if (n < 0)
		{
			cout << "So Nhap Vao Phai Lon Hon 0 Xin Nhap Lai" << endl;
		}
	} while (n < 0);
	return n;
}

void TinhTong(int n)
{
	float s = 0;
	for (int i = 0; i <= n; i++)
	{
		s += 1.0 / (2 * i + 1);
	}
	cout << "Ket Qua Phep Toan La : " << s << endl;
}
