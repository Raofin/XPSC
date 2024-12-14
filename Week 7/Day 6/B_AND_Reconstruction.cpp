#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n - 1);
        for (int &x : b) cin >> x;

        a[0] = b[0];
        for (int i = 1; i < n - 1; i++) {
            a[i] = b[i - 1] | b[i];
        }
        a[n - 1] = b[n - 2];

        vector<int> chk(n - 1);
        for (int i = 0; i < n - 1; i++) {
            chk[i] = a[i] & a[i + 1];
        }

        if (chk != b) {
            cout << -1 << '\n';
            continue;
        }

        for (int x : a) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
