#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;
        map<int, int> mp;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            cnt = max(cnt, ++mp[x]);
        }

        int res = 0;
        while (cnt < n) {
            x = min(cnt, n - cnt);
            res += x + 1;
            cnt += x;
        }
        cout << res << '\n';
    }

    return 0;
}