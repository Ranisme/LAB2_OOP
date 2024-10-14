#include "DaGiac.h"
#include <bits/stdc++.h>

using namespace std;

void DaGiac :: Nhap() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        Diem cur(x, y);
        Dinh.push_back(cur);
    }
}

void DaGiac :: Xuat() {
    for (int i = 0; i < n; i++) {
        Dinh[i].Xuat();
    }
}

void DaGiac :: TinhTien(double x, double y) {
    for (int i = 0; i < n; i++) {
        Dinh[i].TinhTien(x, y);
    }
}

void DaGiac :: PhongTo(double k) {
    for (int i = 0; i < n; i++) {
        int x = Dinh[i].GetHoanhDo();
        int y = Dinh[i].GetTungDo();
        Dinh[i].TinhTien((k - 1) * x, (k - 1) * y);
    }
}

void DaGiac :: ThuNho(double k) {
    for (int i = 0; i < n; i++) {
        int x = Dinh[i].GetHoanhDo();
        int y = Dinh[i].GetTungDo();
        Dinh[i].TinhTien(x / k - x, y / k - y);
    }
}

void DaGiac :: Quay(double k) {
    double rad = k * 3.14 / 180.0;
    for (int i = 0; i < n; i++) {
        int x = Dinh[i].GetHoanhDo();
        int y = Dinh[i].GetTungDo();
        int x_new = x * cos(rad) - y * sin(rad);
        int y_new = x * sin(rad) + y * cos(rad);
        Dinh[i].TinhTien(x_new - x, y_new - y);
    }
}
