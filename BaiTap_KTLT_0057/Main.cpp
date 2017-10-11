#include "BaiTap_KTLT_0057.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap  ");

	if (KiemTraSoChang(x) == true)
	{
		cout << "Day So Nguyen Duong " << x << " Toan So Chang" << endl;
	}

	else
	{
		cout << "Day So Nguyen Duong " << x << " Co So Chang" << endl;
	}

	system("pause");
}