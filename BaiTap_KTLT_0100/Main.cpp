#include "BaiTap_KTLT_0100.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;


void main()
{
	float a = Input("Nhap Vao So a : ");
	float b = Input("Nhap Vao So b : ");
	float c = Input("Nhap Vao So c : ");

	GiaiPhuongTrinhBacHai(a, b, c);

	system("pause");
}