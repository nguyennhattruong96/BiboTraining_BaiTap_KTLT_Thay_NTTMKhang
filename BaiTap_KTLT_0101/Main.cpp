#include "BaiTap_KTLT_0101.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int nam = InputNam("Nhap Vao Nam : ");
	int thang = InputThang("Nhap Vao Thang: ");

	SoNgay(nam, thang);

	system("pause");
}