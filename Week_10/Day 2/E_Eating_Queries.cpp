#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> arr(n), pre(n + 1);
        for (auto &x : arr) {
            cin >> x;
        }

        sort(arr.rbegin(), arr.rend());
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + arr[i - 1];
        }

        for (int i = 0; i < q; i++) {
            int k, res = -1;
            cin >> k;

            auto it = lower_bound(pre.begin(), pre.end(), k);
            if (it != pre.end()) {
                res = it - pre.begin();
            }
            cout << res << '\n';
        }
    }

    return 0;
}