#pragma once

class Diem {
private:
    double iHoanh, iTung;
public:
    Diem();
    Diem(double Hoanh, double Tung);
    Diem(const Diem &x);
    void Xuat();
    double GetTungDo();
    double GetHoanhDo();
    void SetTungDo(double Tung);
    void SetHoanhDo(double Hoanh);
    void TinhTien(double x, double y);
};
