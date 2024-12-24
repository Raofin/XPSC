#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> x(n), y(n), diff(n);
        for (auto &a : x) cin >> a;
        for (auto &a : y) cin >> a;

        for (ll i = 0; i < n; ++i) {
            diff[i] = y[i] - x[i];
        }

        sort(diff.begin(), diff.end());

        ll res = 0;
        ll l = 0, r = n - 1;
        while (l < r) {
            if (diff[l] + diff[r] >= 0) {
                --r, res++;
            }
            l++;
        }

        cout << res << '\n';
    }

    return 0;
}
