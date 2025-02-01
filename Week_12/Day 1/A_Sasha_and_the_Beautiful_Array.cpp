#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll arr[n];

        for (auto &x : arr) {
            cin >> x;
        }

        sort(arr, arr + n);
        ll sum = 0;
        for (ll i = 1; i < n; i++) {
            sum += (arr[i] - arr[i - 1]);
        }

        cout << sum << '\n';
    }

    return 0;
}
