#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    multiset<ll> ml;
    ll res = 0;
    int l = 0, r = 0;

    while (r < n) {
        ml.insert(v[r]);
        ll mn = *ml.begin(), mx = *ml.rbegin();

        if (mx - mn <= k) {
            res += (r - l + 1);
        } else {
            while (l <= r) {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= k) {
                    break;
                }
                ml.erase(ml.find(v[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= k) {
                res += (r - l + 1);
            }
        }
        r++;
    }

    cout << res << '\n';
    return 0;
}