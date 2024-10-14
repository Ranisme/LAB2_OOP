#include "Diem.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
    Diem Point;
    Point.Nhap();
    int n;
    cout << "Nhap so truy van : "; cin >> n;
    while (n--) {
        int x;
        cin >> x;
        if (x == 1)
            Point.Nhan();
        if (x == 2)
            Point.GocToaDo();
        if (x == 3) {
            int k;
            double d;
            cin >> k >> d;
            Point.TinhTien(k, d);
        }
    }
    Point.Xuat();
    return 0;
}
