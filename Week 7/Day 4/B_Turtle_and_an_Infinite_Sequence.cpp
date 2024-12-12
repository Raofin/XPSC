#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int res = n, pow = 0;
        while (m >= (1 << pow)) {
            res |= (1 << pow);
            pow++;
        }

        for (int i = pow; i <= 32; i++) {
            res |= ((n + m) & (1 << i));
            if (n - m > 0) {
                res |= ((n - m) & (1 << i));
            }
        }

        cout << res << '\n';
    }

    return 0;
}