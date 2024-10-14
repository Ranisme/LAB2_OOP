#include "cList.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    cList a;
    while (true) {
        int n;
        cin >> n;
        if (n == -1)
            break;
        a.Query(n);
    }
    a.Xuat();
    return 0;
}
