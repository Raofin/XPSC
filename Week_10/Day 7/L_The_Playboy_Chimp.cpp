#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[n];
        for (auto &x : arr) {
            cin >> x;
        }

        int q;
        cin >> q;
        while (q--) {
            int a;
            cin >> a;

            int l = lower_bound(arr, arr + n, a) - arr - 1;
            int u = upper_bound(arr, arr + n, a) - arr;

            if (l >= 0 && u < n) {
                cout << arr[l] << ' ' << arr[u] << '\n';
            } else if (l < 0) {
                cout << "X " << arr[u] << "\n";
            } else if (u >= n) {
                cout << arr[l] << " X\n";
            } else {
                cout << "X X\n";
            }
        }
    }

    return 0;
}
