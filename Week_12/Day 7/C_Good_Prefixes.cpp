#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        ll arr[n];
        for (auto &x : arr) {
            cin >> x;
        }

        ll sum = 0, mx = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            mx = max(arr[i], mx);
            if (mx == sum - mx) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
