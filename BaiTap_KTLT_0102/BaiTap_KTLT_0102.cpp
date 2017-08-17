#include "BaiTap_KTLT_0102.h"


int InputNgay(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0 || n > 31)
		{
			cout << "Day khong phai la ngay hay nhap lai" << endl;
		}

	} while (n <= 0 || n > 31);

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


void Output(int n)
{
	cout << "Ket qua la: " << n << endl;
}

bool KiemTraNamNhuan(int nam)
{
	if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
	{
		return true;
	}
	return false;
}

void NgayKeTiep(int ngay, int thang, int nam)
{
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		if (ngay == 31 && thang == 12)
		{
			ngay = 1;
			thang = 1;
			nam++;
		}
		else
		{
			if (ngay == 31)
			{
				ngay = 1;
				thang++;
			}
			else
			{
				ngay++;


			}
		}
	}
	else
	{
		if(thang == 2)
		{
			if (KiemTraNamNhuan(nam) == true)
			{
				while (ngay > 29)
				{
					if (ngay > 29)
					{
						cout << "Thang " << thang << " cua nam " << nam << " chi co 29 ngay xin nhap lai " << endl;

						ngay = InputNgay("Nhap lai ngay : ");
						thang = InputThang("Nhap lai thang : ");
						nam = InputNam("Nhap lai nam : ");
						if (thang != 2)
							goto KhacThang2;
					}
				}
				if (ngay == 29)
				{
					ngay = 1;
					thang++;


				}
				else
				{
					ngay++;
				}
			}
			else
			{
				while (ngay > 28)
				{
					if (ngay > 28)
					{
						cout << "Thang " << thang << " cua nam " << nam << " chi co 28 ngay xin nhap lai " << endl;

						ngay = InputNgay("Nhap lai ngay : ");
						thang = InputThang("Nhap lai thang : ");
						nam = InputNam("Nhap lai nam : ");
						if (thang != 2)
							goto KhacThang2;
					}
				}
				if (ngay == 28)
				{
					ngay = 1;
					thang++;
				}
				else
				{
					ngay++;
				}
			}
		}
		else
		KhacThang2:
		{
			if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
			{
				while (ngay > 30)
				{
					if (ngay > 30)
					{
						cout << "Thang nay chi co toi da 30 ngay xin hay nhap lai" << endl;

						ngay = InputNgay("Nhap lai ngay : ");
						thang = InputThang("Nhap lai thang : ");
						nam = InputNam("Nhap lai nam : ");
					}
				}
			}
			else
			{
				while (ngay > 31)
				{
					if (ngay > 31)
					{
						cout << "Thang nay chi co toi da 31 ngay xin hay nhap lai" << endl;

						ngay = InputNgay("Nhap lai ngay : ");
						thang = InputThang("Nhap lai thang : ");
						nam = InputNam("Nhap lai nam : ");
					}
				}
			}
			if (ngay == 30)
			{
				ngay = 1;
				thang++;
			}
			else
			{
				ngay++;
			}
		}
		
	}
	cout << "Ngay ke tiep la ngay " << ngay << " thang " << thang << " nam " << nam << endl;
}

