#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        int arr[n + 1] = {0};
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        sort(arr + 1, arr + n + 1);

        for (int i = 1; i <= n; i++) {
            arr[i] += arr[i - 1];
        }

        int res = -arr[n];
        for (int rem = 0; rem <= k; rem++) {
            int lim = max(0, n - rem - x);
            int neg = arr[n - rem] - arr[lim];
            int pos = (lim == 0) ? 0 : arr[lim];
            res = max(res, pos - neg);
        }

        cout << res << '\n';
    }

    return 0;
}
