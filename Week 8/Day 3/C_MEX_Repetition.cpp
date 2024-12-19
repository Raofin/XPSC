#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll sum = n * (n + 1) / 2;
        ll csum = 0;
        vector<ll> v(n);

        for (auto &x : v) {
            cin >> x;
            csum += x;
        }

        v.push_back(sum - csum);
        k %= ++n;

        for (ll i = 0; i < n - 1; i++) {
            ll ridx = (i - k + n) % n;
            cout << v[ridx] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
