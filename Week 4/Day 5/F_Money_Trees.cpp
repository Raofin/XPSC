#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int res = 0, sum = 0;
        for (int l = 0, r = 0; l < n; l++) {
            if (l != r && b[l - 1] % b[l] != 0) {
                r = l;
                sum = 0;
            }
            sum += a[l];

            while (r <= l && sum > k) {
                sum -= a[r];
                r++;
            }
            res = max(res, l + 1 - r);
        }
        cout << res << '\n';
    }

    return 0;
}
