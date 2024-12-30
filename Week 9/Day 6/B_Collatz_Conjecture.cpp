#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        while (x != 1 && k > 0) {
            ll inc = (x / y + 1) * y - x;
            inc = max(1LL, inc);
            inc = min(inc, k);
            x += inc;
            k -= inc;

            while (x % y == 0) {
                x /= y;
            }
        }

        cout << x + k % --y << '\n';
    }

    return 0;
}
