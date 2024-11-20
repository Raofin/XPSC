#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, s;
    cin >> n >> s;

    vector<ll> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    ll l = 0, sum = 0, len = LLONG_MAX;
    for (ll r = 0; r < n; r++) {
        sum += v[r];
        while (sum - v[l] >= s) {
            sum -= v[l];
            l++;
        }
        if (sum >= s) {
            len = min(len, r - l + 1);
        }
    }
    cout << (len == LLONG_MAX ? -1 : len) << '\n';

    return 0;
}
