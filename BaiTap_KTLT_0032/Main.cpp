#include"BaiTap_KTLT_0032.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	if (KiemTraSoChinhPhuong(x))
	{
		cout << x << " La so chinh phuong" << endl;
	}
	else
	{
		cout << x << " Khong la so chinh phuong" << endl;
	}

	system("pause");
}