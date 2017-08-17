#include "BaiTap_KTLT_0100.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;


void main()
{
	float a = Input("Nhap vao a: ");
	float b = Input("Nhap vao b: ");
	float c = Input("Nhap vao c: ");

	GiaiPhuongTrinhBacHai(a, b, c);

	system("pause");
}