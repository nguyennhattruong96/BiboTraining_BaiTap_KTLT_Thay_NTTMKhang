#include "BaiTap_KTLT_0076.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (KiemTra3k(x) == true)
	{
		cout << x <<" La So Co Dang 3K" << endl;
	}

	else
	{
		cout << x <<" La So Khong Co Dang 3K" << endl;
	}

	system("pause");
}