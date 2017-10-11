#include "BaiTap_KTLT_0114_036_c1.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");

	if (x == 1)
	{
		cout << "ket Qua Cua Phep Toan La : 1 " << endl;
	}
	else
	{
		cout << "Ket Qua Cua Phep Toan La : " << TinhTong(x) << endl;
	}

	system("pause");
}