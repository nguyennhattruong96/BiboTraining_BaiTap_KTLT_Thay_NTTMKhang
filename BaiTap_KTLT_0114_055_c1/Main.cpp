#include "BaiTap_KTLT_0114_055_c1.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	cout << "So Luong Chu So Cua So Nguyen Duong " << x << " La : " << SoLuongChuSo(x) << endl;

	system("pause");
}