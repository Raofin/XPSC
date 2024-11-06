#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            mp[x].insert(i);
        }

        for (int i = 1; i <= m; i++) {
            int l, r;
            cin >> l >> r;
            if ((mp.find(l) == mp.end()) || (mp.find(r) == mp.end())) {
                cout << "NO" << '\n';
            } else {
                if (*mp[l].begin() < *mp[r].rbegin()) {
                    cout << "YES" << '\n';
                } else {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}