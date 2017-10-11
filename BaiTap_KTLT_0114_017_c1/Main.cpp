#include "BaiTap_KTLT_0114_017_c1.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So X : ");
	int n = Input("Nhap Vao So N : ");

	cout << "Ket Qua Phep Toan La : " << TinhTong(x, n) << endl;

	system("pause");

}