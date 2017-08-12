#include "BaiTap_KTLT_0036.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	if (x == 1)
	{
		cout << "ket qua phep toan la : 1 " << endl;
	}
	else
	{
		cout << "ket qua la: " << Sum(x) << endl;
	}

	system("pause");
}