#include "cList.h"
#include <bits/stdc++.h>

using namespace std;

void cList :: Query(int n) {
    if (n == 0) {
        double x;
        cin >> x;
        a.push_back(x);
    }

    if (n == 1) {
        double x;
        cin >> x;
        auto it = find(a.begin(), a.end(), x);
        if (it != a.end())
            a.erase(it);
    }

    if (n == 2) {
        double x;
        cin >> x;
        a.remove(x);
    }

    if (n == 3) {
        int x;
        double y;
        cin >> x;
        cin >> y;
        if (x >= 0 && x < a.size()) {
            auto it = a.begin();
            advance(it, x);
            *it = y;
        }
    }
}

void cList :: Xuat() {
    cout << setprecision(2) << fixed;
    for (auto cur : a)
        cout << cur << " ";
}

