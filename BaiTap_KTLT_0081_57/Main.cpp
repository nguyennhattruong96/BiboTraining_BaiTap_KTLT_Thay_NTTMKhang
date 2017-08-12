#include "BaiTap_KTLT_0081_57.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao day so nguyen x: ");

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