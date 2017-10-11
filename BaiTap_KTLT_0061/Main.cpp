#include"BaiTap_KTLT_0061.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao Day So Nguyen Duong X : ");

	if (KiemTraGiam(x))
	{
		cout << x <<" La Day So Nguyen Duong Giam" << endl;
	}
	else
	{
		cout << x <<" Khong La day So Nguyen Duong Giam" << endl;
	}
	system("pause");
}