#include "BaiTap_KTLT_0094.h"

void InSo(int x)
{
	for (int i = 1; i < 100; i += 2)
	{
		if (i == 5 || i == 7 || i == 9)
		{
			continue;
		}

		cout << i << endl;
	}
}

