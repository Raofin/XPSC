#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
        }
        sort(v.begin(), v.end());

        long long res = 0;
        for (int i = 0; i < n; i++) {
            auto it1 = lower_bound(v.begin() + i + 1, v.end(), l - v[i]);
            auto it2 = upper_bound(v.begin() + i + 1, v.end(), r - v[i]);
            res += it2 - it1;
        }
        cout << res << '\n';
    }

    return 0;
}
