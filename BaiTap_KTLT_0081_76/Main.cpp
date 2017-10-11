#include "BaiTap_KTLT_0081_76.h"

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTra3k(x) == true)
	{
		cout << x << " La So Co Dang 3k" << endl;
	}

	else
	{
		cout << x << " La So Khong Co Dang 3K" << endl;
	}

	system("pause");
}