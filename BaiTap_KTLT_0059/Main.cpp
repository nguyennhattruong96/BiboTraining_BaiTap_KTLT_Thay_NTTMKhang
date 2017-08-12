#include"BaiTap_KTLT_0059.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

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