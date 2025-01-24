#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int &x : v) {
            cin >> x;
        }

        int scnt = 0, ecnt = 0, last = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == v[0]) {
                scnt++;
                last = i;
                if (scnt == k) break;
            }
        }

        for (int i = n - 1; i > last; i--) {
            if (v[i] == v.back()) ecnt++;
            if (ecnt == k) break;
        }

        if ((scnt >= k && ecnt >= k) || scnt == n ||
            (v[0] == v.back() && scnt >= k)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
