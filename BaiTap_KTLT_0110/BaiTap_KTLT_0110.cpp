#include "BaiTap_KTLT_0110.h"

void SoPhuongAn()
{
	int dem = 0;
	for (int i = 0; i <= 200; i++)
	{
		for (int j = 0;  j <= 100;  j++)
		{
			for (int k = 0; k <= 40; k++)
			{
				if (i * 1000 + j * 2000 + k * 5000 == 200000)
				{
					dem++;
					cout << "So to 1000 " << i << ",so to 2000 " << j << ",so to 5000 " << k << endl;
				}
			}
		}
	}
	cout << "Tong so cach ta co la : " << dem << endl;
}
