#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[k], mx = -1;
        for (auto x : arr) {
            cin >> x;
            mx = max(mx, x);
        }
        cout << 2 * (n - mx) - k + 1 << '\n';
    }

    return 0;
}