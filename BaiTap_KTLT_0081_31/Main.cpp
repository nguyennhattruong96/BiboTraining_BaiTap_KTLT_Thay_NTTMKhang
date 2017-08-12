#include "BaiTap_KTLT_0081_31.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("nhap vao x: ");

	if (KiemTraSoNguyenTo(x))
	{
		cout << x << " La so nguyen to" << endl;
	}

	else
	{
		cout << x << " Khong la so nguyen to" << endl;
	}

	system("pause");
}