#include "BaiTap_KTLT_0102.h"

#include <iostream>
#include <string>

using namespace std;

void main()
{
	//input
	int ngay = InputNgay("Nhap Vao Ngay : ");
	int thang = InputThang("Nhap Vao Thang: ");
	int nam = InputNam("Nhap Vao Nam : ");
	//output
	NgayKeTiep(ngay, thang, nam);
	system("pause");
}