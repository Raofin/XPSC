#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (auto &x : arr) {
        cin >> x;
    }

    for (int i = 0; i < q; i++) {
        int key, l = 0, r = n - 1, res = n, mid;
        cin >> key;

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (key <= arr[mid]) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res + 1 << '\n';
    }

    return 0;
}