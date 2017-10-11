#include "BaiTap_KTLT_0114_013_c1.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X :  ");
	int n = Input("Nhap Vao So Nguyen Duong N : ");

	cout << "Ket Qua Cua Phep Toan La : " << TinhTong(x, n) << endl;

	system("pause");

}