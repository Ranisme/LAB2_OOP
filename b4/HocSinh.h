#pragma once
#include <bits/stdc++.h>

using namespace std;

class HocSinh {
private:
    string Ten;
    int MSSV;
    int iNgay, iThang, iNam;
    double fToan, fVan, fAnh;
public:
    void Nhap();
    void Xuat();
    double Tong();
};


