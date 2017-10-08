#include "BaiTap_KTLT_0111_a.h"

void TamGiacCan(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n * 2; j++)
			if (j >= n - i - 1 && j <= n + i - 1)
				cout << "*";
			else
				cout << " ";
		cout<<"\n";
	}
}
