#include "BaiTap_KTLT_0114_010_c1.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Inputx("Nhap Vao x : ");
	int n = Inputn("Nhap Vao So Nguyen Duong n : ");

	cout << "Ket Qua Cua Phep Toan La : " << LuyThua(x, n) << endl;

	system("pause");

}