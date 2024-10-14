#include "Diem.h"
#include <bits/stdc++.h>

using namespace std;

void Diem :: Nhap() {
    cin >> iHoanh >> iTung;
}

void Diem :: Xuat() {
    cout << setprecision(4) << fixed;
    cout << iHoanh << " " << iTung;
}

void Diem :: Nhan() {
    iHoanh = iHoanh * 2;
    iTung = iTung * 2;
}

void Diem :: GocToaDo() {
    iHoanh = 0;
    iTung = 0;
}

void Diem :: TinhTien(int k, double d) {
    if (k == 0)
        iHoanh += d;
    else
        iTung += d;
}




