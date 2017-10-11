#include "BaiTap_KTLT_0056.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao Day So Nguyen Duong X : ");

	if (KiemTraSoLe(x))
	{
		cout << "Day So Nguyen Duong " << x << " Toan So Le" << endl;
	}

	else
	{
		cout << "Day So Nguyen Duong " << x << " Co So Chang" << endl;
	}

	system("pause");
}