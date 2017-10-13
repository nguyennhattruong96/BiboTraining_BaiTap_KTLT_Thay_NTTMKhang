#include "BaiTap_KTLT_0114_045_c1.h"

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

void TichChuSo(int n)
{
	int s = 1;
	int x = n;

	for (; n > 0; n /= 10)
	{
		s *= n % 10;
	}

	cout << "Tich Cua Tat Ca Cac Chu So Cua " << x << " La : " << s << endl;
}
