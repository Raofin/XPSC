#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        int z = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) {
                z++;
            }
            mx = max(mx, x);
        }

        if (z <= n - z + 1) {
            cout << 0 << '\n';
        } else if (mx == 1) {
            cout << 2 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }

    return 0;
}
