#include "BaiTap_KTLT_0114_060_c1.h"

#include <iostream>
#include <string>

using namespace std;


void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	if (KiemTraTang(x))
	{
		cout << x << " La Day So Nguyen Duong Tang" << endl;
	}

	else
	{
		cout << x <<" La Day So Nguyen Duong Khong Tang" << endl;
	}

	system("pause");
}