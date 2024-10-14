#include "TamGiac.h"
#include <bits/stdc++.h>

using namespace std;

void TamGiac :: Nhap() {
    cin >> A.first >> A.second;
    cin >> B.first >> B.second;
    cin >> C.first >> C.second;
}

void TamGiac :: Xuat() {
    cout << A.first << " " << A.second << "\n";
    cout << B.first << " " << B.second << "\n";
    cout << C.first << " " << C.second << "\n";
}

void TamGiac :: TinhTien(float goc, float d) {
    float radian = goc * 3.14 / 180.0;
    float dx = d * cos(radian);
    float dy = d * sin(radian);
    A.first += dx; A.second += dy;
    B.first += dx; B.second += dy;
    C.first += dx; C.second += dy;
}


