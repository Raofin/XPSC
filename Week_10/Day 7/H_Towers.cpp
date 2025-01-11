#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, x, res = 0;
    cin >> n;
    vector<ll> v;

    while (n--) {
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        if (it == v.end()) {
            v.push_back(x);
            res++;
        } else {
            *it = x;
        }
    }

    cout << res << '\n';
    return 0;
}
