#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll x;
    cin >> n >> x;

    vector<pair<ll, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());

    bool flag = true;
    for (int i = 0; i < n - 2 and flag; i++) {
        ll t = x - v[i].first;
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            ll sum = v[l].first + v[r].first;
            if (sum == t) {
                cout << v[l].second << ' ' << v[r].second << ' ' << v[i].second << '\n';
                flag = false;
                break;
            } else if (sum < t) {
                l++;
            } else {
                r--;
            }
        }
    }

    if (flag) cout << "IMPOSSIBLE\n";
    return 0;
}
