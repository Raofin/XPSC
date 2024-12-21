#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int &x : arr) {
            cin >> x;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (abs(arr[i] - (i + 1)) % k) {
                cnt++;
            }
        }

        int res = -1;
        if (cnt == 0) {
            res = 0;
        } else if (cnt == 2) {
            res = 1;
        }
        cout << res << '\n';
    }

    return 0;
}
