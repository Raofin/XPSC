#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 1;
    while (true) {
        int n, q;
        cin >> n >> q;
        if (n == 0 || q == 0) break;

        int arr[n];
        for (auto &x : arr) {
            cin >> x;
        }

        sort(arr, arr + n);
        cout << "CASE# " << t++ << ":\n";

        while (q--) {
            int x;
            cin >> x;

            int l = 0;
            int r = n - 1;
            int pos = 0;
            while (l <= r) {
                int mid = (l + r) / 2;
                if (arr[mid] == x) {
                    pos = mid + 1;
                    r = mid - 1;
                } else if (arr[mid] > x) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            if (pos == 0) {
                cout << x << " not found\n";
            } else {
                cout << x << " found at " << pos << '\n';
            }
        }
    }

    return 0;
}
