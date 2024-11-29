#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            XOR ^= a[i];
        }

        int res = XOR;
        for (int i = 0; i < n; i++) {
            int currXOR = (XOR ^ a[i]);
            res = min(res, currXOR);
        }

        cout << res << '\n';
    }

    return 0;
}