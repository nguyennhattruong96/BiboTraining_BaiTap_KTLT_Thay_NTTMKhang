#include "BaiTap_KTLT_0081_75.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	if (KiemTra2k(x) == true)
	{
		cout << "So nay co dang 2K" << endl;
	}

	else
	{
		cout << "So nay khong co dang 2K" << endl;
	}

	system("pause");
}