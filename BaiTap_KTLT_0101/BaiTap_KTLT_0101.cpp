#include "BaiTap_KTLT_0101.h"

int InputNam(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
		{
			cout << "Day khong phai la nam hay nhap lai" << endl;
		}

	} while (n <= 0);

	return n;
}

int InputThang(string sMessage)
{
	int n;
	
	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0 || n > 12)
		{
			cout << "Day khong phai la thang hay nhap lai" << endl;
		}

	} while (n <= 0 || n > 12);

	return n;
}


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}

bool KiemTraNamNhau(int nam)
{
	if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
	{
		return true;
	}
	return false;
}

void SoNgay(int nam, int thang)
{
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		cout <<"Thang " << thang << " Co 31 Ngay Trong " << nam << endl;
	}
	else
	{
		if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		{
			cout << "Thang " << thang << " Co 30 Ngay Trong " << nam << endl;
		}
		else
		{
			if (KiemTraNamNhau(nam))
			{
				cout << "Thang " << thang << " Co 29 Ngay Trong " << nam << endl;
			}
			else
			{
				cout << "Thang " << thang << " Co 28 Ngay Trong Nam " << nam << endl;
			}
		}
	}
}

