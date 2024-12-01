#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> v(k);
        for (ll &x : v) {
            cin >> x;
        }

        ll diff = LLONG_MAX;
        bool flag = true;
        for (ll i = k - 1; i > 0; i--) {
            ll curr = v[i] - v[i - 1];
            if (curr > diff) {
                flag = false;
                break;
            }
            diff = curr;
        }

        if (!flag) {
            cout << "No\n";
            continue;
        }

        ll rem = v[0] - (n - k) * diff;
        if (rem > diff) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }

    return 0;
}