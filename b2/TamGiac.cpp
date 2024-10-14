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

void TamGiac :: TinhTien(pair <double, double> x) {
    A.first += x.first; A.second += x.second;
    B.first += x.first; B.second += x.second;
    C.first += x.first; C.second += x.second;
}

// Chung ta se phong to cac canh theo he so K
// Xac dinh vector canh
void TamGiac :: PhongTo(double k) {
    pair <double, double> AB = {B.first - A.first, B.second - A.second};
    pair <double, double> AC = {C.first - A.first, C.second - A.second};
    B.first = A.first + k * AB.first; B.second = A.second + k * AB.second;
    C.first = A.first + k * AC.first; C.second = A.second + k * AC.second;
}


// Tuong tu voi phong to
void TamGiac :: ThuNho(double k) {
    pair <double, double> AB = {B.first - A.first, B.second - A.second};
    pair <double, double> AC = {C.first - A.first, C.second - A.second};
    B.first = A.first + AB.first / k; B.second = A.second + AB.second / k;
    C.first = A.first + AC.first / k; C.second = A.second + AC.second / k;
}


void TamGiac :: Quay(double k) {
    // tim trong tam
    k = k * 3.14 / 180;
    pair <double, double> Tam = {(A.first + B.first + C.first) / 3, (A.second + B.second + C.second) / 3};
    A.first = Tam.first + (A.first - Tam.first) * cos(k) - (A.second - Tam.second) * sin(k);
    A.second = Tam.second + (A.first - Tam.first) * sin(k) + (A.second + Tam.second) *cos(k);

    B.first = Tam.first + (B.first - Tam.first) * cos(k) - (B.second - Tam.second) * sin(k);
    B.second = Tam.second + (B.first - Tam.first) * sin(k) + (B.second + Tam.second) *cos(k);

    C.first = Tam.first + (C.first - Tam.first) * cos(k) - (C.second - Tam.second) * sin(k);
    C.second = Tam.second + (C.first - Tam.first) * sin(k) + (C.second + Tam.second) *cos(k);
}
