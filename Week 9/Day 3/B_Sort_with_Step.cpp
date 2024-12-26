#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int x, cnt = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;

            if (abs(x - i) % k) {
                cnt++;
            }
        }

        if (cnt == 0) {
            cout << 0 << '\n';
        } else if (cnt == 2) {
            cout << 1 << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}