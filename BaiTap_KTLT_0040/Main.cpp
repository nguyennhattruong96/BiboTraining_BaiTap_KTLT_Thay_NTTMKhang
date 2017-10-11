#include "BaiTap_KTLT_0040.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	float x = Input("Nhap Vao So Nguyen Duong X : ");
	int n = Input("Nhap Vao So Nguyen Duong N : ");

	cout << "Ket Qua Cua Phep Toan La : " << Sum(x, n) << endl;

	system("pause");
}