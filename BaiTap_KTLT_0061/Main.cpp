#include"BaiTap_KTLT_0061.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("nhap vao x:");

	if (KiemTraGiam(x))
	{
		cout << "Day nay la day giam" << endl;
	}
	else
	{
		cout << "Day nay khong la day giam" << endl;
	}
	system("pause");
}