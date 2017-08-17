#include "BaiTap_KTLT_0109.h"

void InBanCuuChuong()
{
	for (int i = 2; i <= 9; i++)
	{
		cout << "Bang cuu chuong " << i << endl;
		for (int j = 1; j <= 10; j++)
		{
			int s = i *j;

			cout << i << "x" << j << " = " << s << endl;
		}
		cout << endl;
	}
}
