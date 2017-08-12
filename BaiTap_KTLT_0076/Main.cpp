#include "BaiTap_KTLT_0076.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	if (KiemTra3k(x) == true)
	{
		cout << "So nay co dang 3K" << endl;
	}

	else
	{
		cout << "So nay khong co dang 3K" << endl;
	}

	system("pause");
}