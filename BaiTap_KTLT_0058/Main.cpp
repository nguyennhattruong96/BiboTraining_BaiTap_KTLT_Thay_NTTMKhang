#include "BaiTap_KTLT_0058.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao mot day so nguyen x: ");

	if (KiemTraSoChang(x) == true)
	{
		cout << "day so nguyen " << x << " toan so chang" << endl;
	}

	else
	{
		cout << "day so nguyen " << x << " co so le" << endl;
	}

	system("pause");
}