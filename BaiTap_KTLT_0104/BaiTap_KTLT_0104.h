#ifndef __BaiTap_KTLT_0104_H__
#define __BaiTap_KTLT_0104_H__

#include <iostream>
#include <string>

using namespace std;

#pragma once

int InputNgay(string sMessage);
int InputThang(string sMessage);
int InputNam(string sMessage);
void Output(int n);

bool KiemTraNamNhuan(int nam);
void KiemTraNgayHopLe(int &ngay, int &thang, int &nam);
void NgayThuBaoNhieu(int ngay, int thang, int nam);


#endif // !__BaiTap_KTLT_0104_H__
