#include  "BaiTap_KTLT_0114_052_c1.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap Vao So Nguyen Duong X : ");

	cout << "Chu So Nho Nhat Cua So Nguyen Duong " << x << " La : " << KiemTraSoNhoNhat(x) << endl;

	system("pause");
}