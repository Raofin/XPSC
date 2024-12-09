#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        int res = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] <= b[i] * 2) and (b[i] <= a[i] * 2)) {
                res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}