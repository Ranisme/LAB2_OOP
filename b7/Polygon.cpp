#include "Polygon.h"
#include <bits/stdc++.h>

using namespace std;

void Polygon :: Nhap() {
    cin >> n;
    a.push_back({0, 0});
    for (int i = 0; i < n; i++) {
        pair <float, float> cur;
        cin >> cur.first >> cur.second;
        a.push_back(cur);
    }
}

float Polygon :: DienTich() {
    a[0] = a[n]; a.push_back(a[1]);
    float ans = 0;
    for (int i = 1; i <= n; i++)
        ans = ans + a[i].second * (a[i - 1].first - a[i + 1].first);
    return abs(ans) / 2;
}
