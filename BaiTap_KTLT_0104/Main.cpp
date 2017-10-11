#include "BaiTap_KTLT_0104.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	//input
	int ngay = InputNgay("Nhap Vao Ngay : ");
	int thang = InputThang("Nhap Vao Thang : ");
	int nam = InputNam("Nhap Vao Nam : ");
	KiemTraNgayHopLe(ngay, thang, nam);

	//output
	NgayThuBaoNhieu(ngay, thang, nam);
	system("pause");
}