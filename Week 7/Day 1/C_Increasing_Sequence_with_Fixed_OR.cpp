#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        deque<ll> res;
        for (int k = 0; k <= __lg(n); k++) {
            if ((n >> k) & 1) {
                ll x = n - (1LL << k);
                if (x > 0) {
                    res.push_front(x);
                }
            }
        }

        res.push_back(n);
        cout << res.size() << '\n';
        for (auto x : res) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}