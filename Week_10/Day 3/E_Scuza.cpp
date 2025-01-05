#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n + 1), pre(n + 2, 0), res(q);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pre[i] = pre[i - 1] + v[i];
        }

        vector<pair<ll, int>> qp(q);
        for (int i = 0; i < q; i++) {
            cin >> qp[i].first;
            qp[i].second = i;
        }

        sort(qp.begin(), qp.end());

        int cnt = 0;
        for (int i = 0; i < q; i++) {
            while (cnt < n && v[cnt + 1] <= qp[i].first) {
                cnt++;
            }
            res[qp[i].second] = pre[cnt];
        }

        for (auto x : res) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
