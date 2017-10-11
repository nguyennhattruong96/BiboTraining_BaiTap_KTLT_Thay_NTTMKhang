#include "BaiTap_KTLT_0114_010_c1.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Inputx("Nhap Vao So X : ");
	int n = Inputn("Nhap Vao So Nguyen Duong N : ");

	cout << "Ket Qua Cua Phep Toan La : " << LuyThua(x, n) << endl;

	system("pause");

}