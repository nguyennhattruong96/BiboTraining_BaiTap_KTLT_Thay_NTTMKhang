#include"BaiTap_KTLT_0052.h"

#include<iostream>
#include<string>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	cout << "Chu so nho nhat " << x << " la: " << KiemTraSoNhoNhat(x) << endl;

	system("pause");
}