#include "BaiTap_KTLT_0081_61.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao Day So Nguyen Duong X : ");

	if (KiemTraGiam(x))
	{
		cout << x << " La Day So Nguyen Duong Giam" << endl;
	}

	else
	{
		cout << x << " Khong La Day So Nguyen Giam" << endl;
	}

	system("pause");
}