#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

int main() {
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll red = (p * (n / a));
    ll blue = (q * (n / b));
    ll common = (n / lcm(a, b)) * min(p, q);
    ll res = red + blue - common;

    cout << res << '\n';
    return 0;
}
