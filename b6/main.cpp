#include "TamGiac.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    TamGiac a;
    a.Nhap();
    float k, d;
    cin >> k >> d;
    a.TinhTien(k, d);
    a.Xuat();
    return 0;
}
