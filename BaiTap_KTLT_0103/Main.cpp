#include"BaiTap_KTLT_0103.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int ngay = InputNgay("Nhap vao ngay : ");
	int thang = InputThang("Nhap vao thang: ");
	int nam = InputNam("Nhap vao nam : ");

	NgayTruoc(ngay, thang, nam);

	system("pause");
}