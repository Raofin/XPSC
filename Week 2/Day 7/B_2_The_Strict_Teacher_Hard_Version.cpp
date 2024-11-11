#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + m);

        for (int i = 0; i < q; i++) {
            int pos;
            cin >> pos;
            int up = upper_bound(arr, arr + m, pos) - arr;

            int res = 0;
            if (up == 0) {
                res = arr[0] - 1;
            } else if (up == m) {
                res = n - arr[m - 1];
            } else {
                res = (arr[up] - arr[up - 1]) / 2;
            }

            cout << res << '\n';
        }
    }

    return 0;
}
