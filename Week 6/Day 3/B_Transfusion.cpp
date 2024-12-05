#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, x, sum = 0, evnSum = 0, oddSum = 0;
        cin >> n;

        for (ll i = 1; i <= n; i++) {
            cin >> x;
            sum += x;

            if (i % 2 == 1) {
                oddSum += x;
            } else {
                evnSum += x;
            }
        }

        x = sum / n;
        bool div = sum % n == 0;
        bool ev = evnSum == (n / 2) * x;
        bool od = oddSum == (n - n / 2) * x;

        cout << (div and ev and od ? "YES\n" : "NO\n");
    }

    return 0;
}
