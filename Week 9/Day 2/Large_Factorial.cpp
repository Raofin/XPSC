#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int res = 1;
        for (int i = 1; i <= n; i++) {
            res = (1LL * res % MOD * i % MOD) % MOD;
        }
        cout << res << '\n';
    }

    return 0;
}