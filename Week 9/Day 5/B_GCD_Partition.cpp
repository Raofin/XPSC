#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> pre(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> pre[i], pre[i] += pre[i - 1];
        }

        ll g, res = 1;
        for (int i = 1; i < n; i++) {
            g = gcd(pre[i], pre[n] - pre[i]);
            res = max(res, g);
        }

        cout << res << '\n';
    }

    return 0;
}
