#include "BaiTap_KTLT_0102.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	//input
	int ngay = InputNgay("Nhap vao ngay : ");
	int thang = InputThang("Nhap vao thang: ");
	int nam = InputNam("Nhap vao nam : ");
	//output
	NgayKeTiep(ngay, thang, nam);
	system("pause");
}