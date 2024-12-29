#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll arr[n];
    ll sum = 0, g = 0, mx = 0;
    for (auto &x : arr) {
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    for (auto x : arr) {
        g = __gcd(g, mx - x);
    }

    ll y = (mx * n - sum) / g;
    cout << y << ' ' << g << '\n';

    return 0;
}
