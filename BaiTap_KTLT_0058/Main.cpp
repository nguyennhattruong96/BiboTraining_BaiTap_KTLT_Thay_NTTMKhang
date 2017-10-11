#include "BaiTap_KTLT_0058.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao Day So Nguyen Duong X : ");

	if (KiemTraSoChang(x) == true)
	{
		cout << "Day So Nguyen Duong " << x << " Toan So Chang" << endl;
	}

	else
	{
		cout << "Day So Nguyen Duong " << x << " Co So Le" << endl;
	}

	system("pause");
}