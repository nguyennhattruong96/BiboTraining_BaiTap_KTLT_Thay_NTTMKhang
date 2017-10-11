#include "BaiTap_KTLT_0010.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");
	int n = Input("Nhap Vao So Nguyen Duong N : ");

	cout << "Ket Qua Phep Luy Thua La : " << LuyThua(x, n) << endl;

	system("pause");

}