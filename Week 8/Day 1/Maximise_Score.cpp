#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int res = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x = 0;
            if (i > 0) {
                x = max(x, abs(arr[i] - arr[i - 1]));
            }
            if (i + 1 < n) {
                x = max(x, abs(arr[i] - arr[i + 1]));
            }
            res = min(res, x);
        }

        cout << res << '\n';
    }

    return 0;
}
