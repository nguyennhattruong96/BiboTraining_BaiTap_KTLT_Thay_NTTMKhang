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
					cout << "Thang " << thang << " Cua Nam " << nam << " Chi Co 29 Ngay Xin Nhap Lai " << endl;

					ngay = InputNgay("Nhap Lai Ngay : ");
					thang = InputThang("Nhap Lai Thang : ");
					nam = InputNam("Nhap Lai nam : ");
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
					cout << "Thang " << thang << " Cua Nam " << nam << " Chi Co 28 Ngay Xin Nhap Lai " << endl;

					ngay = InputNgay("Nhap Lai Ngay : ");
					thang = InputThang("Nhap Lai Thang : ");
					nam = InputNam("Nhap Lai Nam : ");
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
					cout << "Thang Nay Chi Co Toi Da 30 Ngay Xin Nhap Lai" << endl;

					ngay = InputNgay("Nhap Lai Ngay : ");
					thang = InputThang("Nhap Lai Thang : ");
					nam = InputNam("Nhap Lai Nam : ");
				}
			}
		}
		else
		{
			while (ngay > 31)
			{
				if (ngay > 31)
				{
					cout << "Thang Nay Chi Co Toi Da 31 Ngay Xin Nhap Lai" << endl;

					ngay = InputNgay("Nhap Lai Ngay : ");
					thang = InputThang("Nhap Lai Thang : ");
					nam = InputNam("Nhap Lai Nam : ");
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
	cout << "Ngay " << ngay << " Thang " << thang << " Nam " << nam << " La Ngay Thu : " << NgayThuBaoNhieu << endl;
}




