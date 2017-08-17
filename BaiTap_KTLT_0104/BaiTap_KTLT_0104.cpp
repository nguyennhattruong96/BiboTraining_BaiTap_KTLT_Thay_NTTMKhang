#include "BaiTap_KTLT_0104.h"


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
}

void KiemTraNgayHopLe(int &ngay, int &thang, int &nam)
{
	if (thang == 2)
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
		}
	}
	else
	{
	KhacThang2:
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
	}
}

void NgayThuBaoNhieu(int ngay, int thang, int nam)
{
	int NgayThuBaoNhieu;
	switch (thang)
	{
	case 1:
		NgayThuBaoNhieu = ngay;
		break;
	case 2:
		NgayThuBaoNhieu = ngay + 31;
		break;
	case 3:
		NgayThuBaoNhieu = ngay + 59;
		break;
	case 4:
		NgayThuBaoNhieu = ngay + 90;
		break;
	case 5:
		NgayThuBaoNhieu = ngay + 120;
		break;
	case 6:
		NgayThuBaoNhieu = ngay + 151;
		break;
	case 7:
		NgayThuBaoNhieu = ngay + 181;
		break;
	case 8:
		NgayThuBaoNhieu = ngay + 212;
		break;
	case 9:
		NgayThuBaoNhieu = ngay + 243;
		break;
	case 10:
		NgayThuBaoNhieu = ngay + 273;
		break;
	case 11:
		NgayThuBaoNhieu = ngay + 304;
		break;
	case 12:
		NgayThuBaoNhieu = ngay + 334;
		break;
	}
	if (thang > 2 && KiemTraNamNhuan(nam) == true)
	{
		NgayThuBaoNhieu++;
	}
	cout << "Ngay " << ngay << " thang " << thang << " nam " << nam << " la ngay thu " << NgayThuBaoNhieu << endl;
}




