#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        ll arr[n];
        for (auto &val : arr) {
            cin >> val;
        }
        sort(arr, arr + n);

        ll res = 0;
        for (ll i = 0; i < n; i++) {
            res = max(res, arr[i] + (n - i - 1) * x * 1LL);
        }
        cout << res << '\n';
    }

    return 0;
}
