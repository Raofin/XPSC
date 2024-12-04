#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n;

        int res = 0;
        for (int i = 1; i <= n; i++) {
            cin >> p;
            if (abs(p - i)) {
                res = gcd(res, abs(p - i));
            }
        }
        cout << res << '\n';
    }

    return 0;
}
