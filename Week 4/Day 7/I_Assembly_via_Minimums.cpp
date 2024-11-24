#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m = (n * (n - 1)) / 2;

        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + m);
        for (int i = 0, idx = 0; i < n; i++) {
            if (i < n - 1) {
                cout << arr[idx] << ' ';
                idx += n - i - 1;
            } else {
                cout << (int)1e9 << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
