#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> v(n);
        for (auto &x : v) cin >> x;

        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2) {
            g1 = __gcd(g1, v[i]);
        }
        for (int i = 1; i < n; i += 2) {
            g2 = __gcd(g2, v[i]);
        }

        bool flag = true;
        for (int i = 1; i < n; i += 2) {
            if (v[i] % g1 == 0) {
                flag = false;
            }
        }

        if (flag) {
            cout << g1 << '\n';
            continue;
        }

        flag = true;
        for (int i = 0; i < n; i += 2) {
            if (v[i] % g2 == 0) {
                flag = false;
                break;
            }
        }

        cout << (flag ? g2 : 0) << '\n';
    }

    return 0;
}
