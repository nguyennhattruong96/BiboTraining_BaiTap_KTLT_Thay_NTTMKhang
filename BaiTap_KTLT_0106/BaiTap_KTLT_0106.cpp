#include "BaiTap_KTLT_0106.h"

int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 100 || n > 999)
		{
			cout << "So Nguyen Duong Nhap Vao Khong Phai La So Nguyen Duong Co Dang Ba Chu So" << endl;
		}
	} while (n < 100 || n > 999);
	return n;
}


void DocSoNguyen2ChuSo(int n)
{
	int soNguyen = n / 10;
	int soDu = n % 10;
	string SoNguyen;
	string SoDu;
	switch (soNguyen)
	{
	case 0:
		SoNguyen = "Le";
		break;
	case 1:
		SoNguyen = "Muoi";
		break;
	case 2:
		SoNguyen = "Hai";
		break;
	case 3:
		SoNguyen = "Ba";
		break;
	case 4:
		SoNguyen = "Bon";
		break;
	case 5:
		SoNguyen = "Nam";
		break;
	case 6:
		SoNguyen = "Sau";
		break;
	case 7:
		SoNguyen = "Bay";
		break;
	case 8:
		SoNguyen = "Tam";
		break;
	case 9:
		SoNguyen = "Chin";
		break;
	}
	switch (soDu)
	{
	case 0:
		SoDu = "";
		break;
	case 1:
		SoDu = "Mot";
		break;
	case 2:
		SoDu = "Hai";
		break;
	case 3:
		SoDu = "Ba";
		break;
	case 4:
		SoDu = "Bon";
		break;
	case 5:
		SoDu = "Lam";
		break;
	case 6:
		SoDu = "Sau";
		break;
	case 7:
		SoDu = "Bay";
		break;
	case 8:
		SoDu = "Tam";
		break;
	case 9:
		SoDu = "Chin";
		break;

	}
	if (n > 19)
	{
		cout << SoNguyen << " Muoi " << SoDu << endl;
	}
	else
	{
		if (soDu == 5 && soNguyen == 0)
		{
			SoDu = "Nam";
		}
		else if (soDu != 0)
		{
			cout << SoNguyen << " " << SoDu << endl;
		}
		else
		{
			cout << endl;
		}
	}
}


void DocSoNguyen(int n)
{
	int a;
	int b;
	int c;
	int soNguyen = n;
	int soDu = 0;

	soDu = soNguyen % 10;
	c = soDu;
	soNguyen = soNguyen / 10;

	soDu = soNguyen % 10;
	b = soDu;
	soNguyen = soNguyen / 10;

	a = soNguyen;

	string SoHangTram;
	switch (a)
	{
	case 1:
		SoHangTram = "Mot";
		break;
	case 2:
		SoHangTram = "Hai";
		break;
	case 3:
		SoHangTram = "Ba";
		break;
	case 4:
		SoHangTram = "Bon";
		break;
	case 5:
		SoHangTram = "Nam";
		break;
	case 6:
		SoHangTram = "Sau";
		break;
	case 7:
		SoHangTram = "Bay";
		break;
	case 8:
		SoHangTram = "Tam";
		break;
	case 9:
		SoHangTram = "Chin";
		break;
	}
	cout << SoHangTram << " Tram ";

	DocSoNguyen2ChuSo(n % 100);
}
