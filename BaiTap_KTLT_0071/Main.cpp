#include "BaiTap_KTLT_0071.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");
	int n = Input("Nhap Vao So N : ");

	cout << "Ket Qua Cua Phep Toan La : " << Tong(x, n) << endl;

	system("pause");
}