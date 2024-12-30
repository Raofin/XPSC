#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x] = i + 1;
        }

        int res = -1;
        for (auto i : mp) {
            for (auto j : mp) {
                if (__gcd(i.first, j.first) == 1) {
                    res = max(res, i.second + j.second);
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
