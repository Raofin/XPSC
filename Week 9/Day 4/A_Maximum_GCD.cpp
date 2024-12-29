#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, res;
        cin >> n;

        if (n % 2) {
            res = __gcd(n - 1, (n - 1) / 2);
        } else {
            res = __gcd(n, n / 2);
        }

        cout << res << '\n';
    }

    return 0;
}
