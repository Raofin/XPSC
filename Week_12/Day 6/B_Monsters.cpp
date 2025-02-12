#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            if (v[i].first % k == 0) {
                v[i].first = 0;
            } else {
                v[i].first = k - v[i].first % k;
            }
            v[i].second = i + 1;
        }

        sort(v.begin(), v.end());
        for (auto [x, y] : v) {
            cout << y << ' ';
        }
        cout << "\n";
    }

    return 0;
}
