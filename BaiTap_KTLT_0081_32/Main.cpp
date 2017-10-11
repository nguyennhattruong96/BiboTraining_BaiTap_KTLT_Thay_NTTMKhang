#include "BaiTap_KTLT_0081_32.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTraSoChinhPhuong(x))
	{
		cout << x << " La So Chinh Phuong" << endl;
	}

	else
	{
		cout << x << " Khong Phai La So Chinh Phuong" << endl;
	}

	system("pause");
}