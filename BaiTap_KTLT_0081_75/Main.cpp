#include "BaiTap_KTLT_0081_75.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTra2k(x) == true)
	{
		cout << x << " La So Co Dang 2K" << endl;
	}

	else
	{
		cout  << x << " La So Khong Co Dang 2K" << endl;
	}

	system("pause");
}