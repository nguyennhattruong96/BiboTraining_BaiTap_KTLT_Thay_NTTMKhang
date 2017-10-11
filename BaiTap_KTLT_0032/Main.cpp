#include"BaiTap_KTLT_0032.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	if (KiemTraSoChinhPhuong(x))
	{
		cout << x << " La So Chinh Phuong" << endl;
	}
	else
	{
		cout << x << " Khong La So Chinh Phuong" << endl;
	}

	system("pause");
}