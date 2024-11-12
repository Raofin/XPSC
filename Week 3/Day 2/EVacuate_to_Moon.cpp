#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;
        ll a[n], b[m];

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + m);
        n--, m--;

        ll res = 0;
        while (n >= 0 && m >= 0) {
            res += min(a[n], b[m] * h);
            n--, m--;
        }

        cout << res << '\n';
    }

    return 0;
}
