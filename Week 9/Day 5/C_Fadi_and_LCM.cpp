#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x, a, b;
    cin >> x;

    for (ll i = sqrt(x); i >= 1; i--) {
        if (x % i == 0) {
            if ((i / gcd(i, x / i)) * (x / i) == x) {
                a = i;
                b = x / i;
                break;
            }
        }
    }

    cout << a << ' ' << b << '\n';
    return 0;
}
