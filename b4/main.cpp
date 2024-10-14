#include "HocSinh.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Nhap so luong thi sinh :";
    cin >> n; cin.ignore();
    HocSinh a[n];
    for (int i = 0; i < n; i++)
        a[i].Nhap();
    cout << "Nhung hoc sinh co tong diem lon hon 15 la : \n";
    int cnt = 0;
    HocSinh Best = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i].Tong() > 15)  {
            cnt++;
            a[i].Xuat();
        }
        if (a[i].Tong() > Best.Tong())
            Best = a[i];
    }
    if (cnt == 0) {
        cout << " Khong ai co tong diem lon hon 15 " << "\n";
    }
    cout << "Hoc sinh co diem cao nhat la : \n";
    Best.Xuat();
    return 0;
}
