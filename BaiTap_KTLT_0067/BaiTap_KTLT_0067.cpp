#include "BaiTap_KTLT_0067.h"


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


void Tong(int x, int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += pow(-1, (i + 1)) * pow(x, i);
	}

	cout << "ket qua cua phep toan la: " << s << endl;
}

