#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll a[k];
        for (auto &x : a) {
            cin >> x;
        }

        sort(a, a + k);
        ll ops = 0;

        for (int i = 0; i < k - 1; i++) {
            ops += (2 * a[i] - 1);
        }

        cout << ops << '\n';
    }

    return 0;
}
