#include "BaiTap_KTLT_0036.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	if (x == 1)
	{
		cout << "Ket Qua Cua Phep Toan La : 1 " << endl;
	}
	else
	{
		cout << "Ket Qua Cua Phep Toan La : " << Sum(x) << endl;
	}

	system("pause");
}