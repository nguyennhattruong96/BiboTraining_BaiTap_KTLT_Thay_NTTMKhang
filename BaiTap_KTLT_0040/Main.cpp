#include "BaiTap_KTLT_0040.h"

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void main()
{
	float x = Input("Nhap vao x: ");
	int n = Input("Nhap vao n: ");

	cout << "Ket qua la:" << Sum(x, n) << endl;

	system("pause");
}