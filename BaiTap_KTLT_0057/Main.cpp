#include "BaiTap_KTLT_0057.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao x: ");

	if (KiemTraSoChang(x) == true)
	{
		cout << "Day so nguyen " << x << " toan so chang" << endl;
	}

	else
	{
		cout << "Day so nguyen " << x << " co so le" << endl;
	}

	system("pause");
}