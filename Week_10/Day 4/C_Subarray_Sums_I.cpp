#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, x;
    cin >> n >> x;

    map<ll, ll> mp;
    ll a, sum = 0, res = 0;
    mp[sum] = 1;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        if (mp[sum - x]) {
            res++;
        }
        mp[sum] = 1;
    }

    cout << res << '\n';
    return 0;
}