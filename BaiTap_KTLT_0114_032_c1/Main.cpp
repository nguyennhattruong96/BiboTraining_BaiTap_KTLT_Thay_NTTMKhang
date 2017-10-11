#include "BaiTap_KTLT_0114_032_c1.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTraSoChinhPhuong(x))
	{
		cout << x << " La Mot So Chinh Phuong" << endl;
	}
	else
	{
		cout << x << " Khong Phai La Mot So Chinh Phuong" << endl;
	}

	system("pause");
}