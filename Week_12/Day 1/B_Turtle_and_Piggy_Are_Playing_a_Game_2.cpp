#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        ll arr[n + 1];

        for (ll i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        sort(arr + 1, arr + n + 1);
        cout << arr[n / 2 + 1] << '\n';
    }

    return 0;
}
