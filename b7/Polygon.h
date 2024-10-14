#pragma once
#include <bits/stdc++.h>

using namespace std;

class Polygon {
private:
    int n;
    vector < pair<float, float> > a;
public:
    void Nhap();
    float DienTich();
};
