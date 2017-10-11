#include "BaiTap_KTLT_0114_031_c1.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTraSoNguyenTo(x))
	{
		cout << x << " La Mot So Nguyen To" << endl;
	}
	else
	{
		cout << x << " Khong Phai La Mot So Nguyen To" << endl;
	}

	system("pause");
}