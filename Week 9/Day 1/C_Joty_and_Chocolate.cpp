#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll LCM(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
    ll res = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << res << '\n';

    return 0;
}