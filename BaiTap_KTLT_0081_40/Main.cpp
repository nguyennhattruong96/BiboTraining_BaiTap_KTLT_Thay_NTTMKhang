#include "BaiTap_KTLT_0081_40.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	float x = Input("Nhap Vao So X : ");
	int n = Input("Nhap Vao So N : ");

	cout << "Ket Qua Cua Phep Toan La :" << Sum(x, n) << endl;

	system("pause");
}