#include "BaiTap_KTLT_0083.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int a = Input("Nhap Vao So a : ");
	int b = Input("Nhap Vao So b : ");

	if (KiemTraCungDau(a, b))
	{
		cout << a << "," << b << " La Hai So Nguyen Cung Dau" << endl;
	}

	else
	{
		cout << a << "," << b << " La Hai So Nguyen Trai Dau" << endl;
	}

	system("pause");
}