#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k, d;
        cin >> n >> k >> d;

        long long a[n];
        for (auto &x : a) {
            cin >> x;
        }

        map<int, int> mp;
        int cnt = 0, res = 0;

        for (int i = 0; i < d; i++) {
            if (mp[a[i]] == 0) {
                cnt++;
            }
            mp[a[i]]++;
        }
        res = cnt;

        for (int i = d; i < n; i++) {
            mp[a[i - d]]--;
            if (mp[a[i - d]] == 0) cnt--;
            if (mp[a[i]] == 0) cnt++;
            mp[a[i]]++;
            res = min(res, cnt);
        }

        cout << res << '\n';
    }

    return 0;
}
