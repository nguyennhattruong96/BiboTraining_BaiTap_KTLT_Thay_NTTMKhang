#include "BaiTap_KTLT_0114_040_c1.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	float x = Input("Nhap Vao So X : ");
	int n = Input("Nhap Vao So N : ");

	cout << "Ket Qua Cua Phep Toan La :" << TinhTong(x, n) << endl;

	system("pause");
}