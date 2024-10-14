#include "Diem.h"
#include <iostream>

using namespace std;

int main()
{
    Diem a(2, 2);
    a.Xuat();
    a.SetHoanhDo(0);
    a.Xuat();
    a.SetTungDo(0);
    a.Xuat();
    a.TinhTien(4, 4);
    a.Xuat();
    return 0;
}
