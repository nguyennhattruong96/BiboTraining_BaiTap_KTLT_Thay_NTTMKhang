#include "BaiTap_KTLT_0104.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	//input
	int ngay = InputNgay("Nhap vao ngay : ");
	int thang = InputThang("Nhap vao thang: ");
	int nam = InputNam("Nhap vao nam : ");
	KiemTraNgayHopLe(ngay, thang, nam);

	//output
	NgayThuBaoNhieu(ngay, thang, nam);
	system("pause");
}