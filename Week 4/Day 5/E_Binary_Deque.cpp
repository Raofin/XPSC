#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k;

        int pre[n + 1];
        pre[0] = 0;

        for (int i = 1; i <= n; i++) {
            cin >> x;
            pre[i] = pre[i - 1] + x;
        }

        if (pre[n] < k) {
            cout << -1 << '\n';
            continue;
        }

        int res = INT_MAX;
        for (int i = 1; i <= n; i++) {
            int sum = pre[i - 1] + k;
            if (sum <= pre[n]) {
                int end = upper_bound(pre, pre + n + 1, sum) - pre - 1;
                int mov = n - (end - i + 1);
                res = min(res, mov);
            }
        }

        cout << res << '\n';
    }

    return 0;
}
