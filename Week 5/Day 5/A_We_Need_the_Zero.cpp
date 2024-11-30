#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        int xsum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            xsum ^= x;
        }

        if (n % 2 == 0 && xsum) {
            xsum = -1;
        }

        cout << xsum << '\n';
    }

    return 0;
}
