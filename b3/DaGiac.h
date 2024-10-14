#pragma once
#include "Diem.h"
#include <bits/stdc++.h>

using namespace std;

class DaGiac {
private:
    int n;
    vector <Diem> Dinh;
public:
    void Nhap();
    void Xuat();
    void TinhTien(double x, double y);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double k);
};
