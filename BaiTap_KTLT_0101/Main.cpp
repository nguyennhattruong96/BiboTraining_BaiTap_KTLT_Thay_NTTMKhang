#include "BaiTap_KTLT_0101.h"

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void main()
{
	int nam = InputNam("Nhap vao nam : ");
	int thang = InputThang("Nhap vao thang: ");

	SoNgay(nam, thang);

	system("pause");
}