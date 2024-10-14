#pragma once
#include <bits/stdc++.h>

using namespace std;

class TamGiac {
private:
    pair <double, double> A, B, C;
public:
    void Nhap();
    void Xuat();
    void TinhTien(pair<double, double> x);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double k);
};
