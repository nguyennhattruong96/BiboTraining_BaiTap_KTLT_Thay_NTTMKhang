#include "BaiTap_KTLT_0114_014_c1.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong x :  ");
	int n = Input("Nhap Vao So Nguyen Duong n : ");

	cout << "Ket Qua Cua Phep Toan La : " << TinhTong(x, n) << endl;

	system("pause");

}