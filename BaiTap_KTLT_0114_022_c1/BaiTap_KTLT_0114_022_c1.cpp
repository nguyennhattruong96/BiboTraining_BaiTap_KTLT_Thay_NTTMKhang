#include "BaiTap_KTLT_0114_022_c1.h"


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


void TichUocSo(int n)
{
	int s = 1;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			s = s * i;
		}
	}

	cout << "Tich Cua Tat Cac Uoc So Cua  " << n << " La : " << s << endl;
}
