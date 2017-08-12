#include"BaiTap_KTLT_0081_59.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao day so nguyen x: ");

	if (SoDoiXung(x))
	{
		cout << x << " La so doi xung" << endl;
	}

	else
	{
		cout << x << " Khong la so doi xung" << endl;
	}

	system("pause");
}