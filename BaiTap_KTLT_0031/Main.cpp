#include "BaiTap_KTLT_0031.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	if (KiemTraSoNguyenTo(x) )
	{
		cout << x << " La So Nguyen To" << endl;
	}
	else
	{
		cout << x << " Khong La So Nguyen To" << endl;
	}

	system("pause");
}