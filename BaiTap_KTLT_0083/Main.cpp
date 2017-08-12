#include "BaiTap_KTLT_0083.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int a = Input("Nhap vao a: ");
	int b = Input("Nhap vao b: ");

	if (KiemTraCungDau(a, b))
	{
		cout << "Hai So Nguyen Nay Co Cung Dau" << endl;
	}

	else
	{
		cout << "Hai So Nguyen Nay La Hai So Nguyen Trai Dau" << endl;
	}

	system("pause");
}