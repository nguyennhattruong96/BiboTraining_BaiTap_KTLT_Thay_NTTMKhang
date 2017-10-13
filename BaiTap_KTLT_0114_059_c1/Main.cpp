#include "BaiTap_KTLT_0114_059_c1.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao Day So Nguyen Duong X : ");

	if (SoDoiXung(x))
	{
		cout << x << " La Day So Nguyen Duong Doi Xung" << endl;
	}

	else
	{
		cout << x << " La Day So Nguyen Duong Khong Doi Xung" << endl;
	}

	system("pause");
}