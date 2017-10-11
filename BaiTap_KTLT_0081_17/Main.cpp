#include "BaiTap_KTLT_0081_17.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");
	int n = Input("Nhap Vao So N : ");

	if (x == 0 && n == 0)
	{
		cout << "Ket Qua Cua Phep Toan La : 1 " << endl;
	}

	else
	{
		cout << "Ket Qua Cua Phep Toan La : " << Sum(x, n) << endl;
	}

	system("pause");
}