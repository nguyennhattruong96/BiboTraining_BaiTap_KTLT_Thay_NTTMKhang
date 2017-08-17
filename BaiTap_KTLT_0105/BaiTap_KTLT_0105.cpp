#include "BaiTap_KTLT_0105.h"

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n < 10 || n > 99)
		{
			cout << "Day khong phai la so nguyen duong co 2 chu so xin nhap lai" << endl;
		}
	} while (n < 10 || n > 99);
	return n;
}

void DocSoNguyen(int n)
{
	int soNguyen = n / 10;
	int soDu = n % 10;
	string SoNguyen;
	string SoDu;
	switch (soNguyen)
	{
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
		cout << SoNguyen << " Muoi " << SoDu << endl;
	else
	{
		cout << SoNguyen << " " << SoDu << endl;
	}
}


