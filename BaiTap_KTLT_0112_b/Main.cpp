#include"BaiTap_KTLT_0112_b.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int cd = Input("Nhap Vao Chieu Dai Cua Hinh Chu Nhat : ");
	int cr = Input("Nhap Vao Chieu Rong Cua Hinh Chu Nhat : ");

	HinhChuNhatRong(cd, cr);

	system("pause");
}