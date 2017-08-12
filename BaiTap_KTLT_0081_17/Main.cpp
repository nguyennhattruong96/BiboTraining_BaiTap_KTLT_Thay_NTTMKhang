#include "BaiTap_KTLT_0081_17.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");
	int n = Input("Nhap vao n: ");

	if (x == 0 && n == 0)
	{
		cout << "Ket qua la: " << "1" << endl;
	}

	else
	{
		cout << "Ket qua la : " << Sum(x, n) << endl;
	}

	system("pause");
}