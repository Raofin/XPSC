#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        bool flag = false;
        for (int i = 0, last = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            if (x - s >= last || (i == n - 1 && m - y >= s)) {
                flag = true;
            }

            last = y;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
