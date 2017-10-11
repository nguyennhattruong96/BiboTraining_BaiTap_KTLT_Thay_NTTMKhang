#include"BaiTap_KTLT_0054.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	cout << "So Luong Chu So Nho Nhat Cua So Nguyen Duong " << x << " La : " << SoLuongSoNhoNhat(x) << endl;

	system("pause");
}