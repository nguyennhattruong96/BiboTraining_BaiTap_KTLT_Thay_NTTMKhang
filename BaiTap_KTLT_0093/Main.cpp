#include "BaiTap_KTLT_0093.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTraSoNguyenTo(x))
	{
		cout << x << " La So Nguyen To" << endl;
	}

	else
	{
		cout << x << " Khong La So Nguyen To" << endl;
	}

	system("pause");
}