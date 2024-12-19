#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        int v[n];
        for (int &x : v) {
            cin >> x;
        }

        int bit, max = 31;
        while (q--) {
            cin >> bit;

            if (bit >= max) continue;

            max = min(max, bit);
            for (int &x : v) {
                if (x % (1 << bit) == 0) {
                    x += (1 << (bit - 1));
                }
            }
        }

        for (int x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
