#include "BaiTap_KTLT_0056.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int x = Input("Nhap vao day so nguyen x: ");

	if (KiemTraSoLe(x))
	{
		cout << "Day so nguyen " << x << " toan so le" << endl;
	}

	else
	{
		cout << "Day so nguyen " << x << " co so chang" << endl;
	}

	system("pause");
}