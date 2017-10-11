#include"BaiTap_KTLT_0103.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	int ngay = InputNgay("Nhap Vao Ngay : ");
	int thang = InputThang("Nhap Vao Thang : ");
	int nam = InputNam("Nhap Vao Nam : ");

	NgayTruoc(ngay, thang, nam);

	system("pause");
}