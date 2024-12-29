#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int getDivisor(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return i;
    }
    return n;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3) {
            cout << -1 << '\n';
            continue;
        }

        if (r - l >= 1) {
            if (r % 2) r--;
            cout << r / 2 << ' ' << r / 2 << '\n';
            continue;
        }

        ll div = getDivisor(l);
        if (div == l) {
            cout << -1 << '\n';
        } else {
            cout << div << ' ' << l - div << '\n';
        }
    }

    return 0;
}
