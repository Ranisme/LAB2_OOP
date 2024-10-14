#include "HocSinh.h"
#include <bits/stdc++.h>

using namespace std;

void HocSinh :: Nhap() {
    cout << "Nhap ten :";
    getline(cin, Ten);
    cout << "Nhap MSSV :";
    cin >> MSSV;
    cout << "Nhap ngay :";
    cin >> iNgay;
    cout << "Nhap thang :";
    cin >> iThang;
    cout << "Nhap nam :";
    cin >> iNam;
    cout << "Nhap diem  toan :";
    cin >> fToan;
    cout << "Nhap diem van :";
    cin >> fVan;
    cout << "Nhap diem tieng anh :";
    cin >> fAnh;
    cin.ignore();
}

void HocSinh :: Xuat() {
    cout << setprecision(4) << fixed;
    cout << Ten << " MSSV : " << MSSV << " Diem : " << Tong() << '\n';
}

double HocSinh :: Tong() {
    return fToan + fVan + fAnh;
}
