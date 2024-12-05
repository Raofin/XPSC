#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> x;
            freq[x]++;
        }

        vector<int> v;
        for (auto [x, y] : freq) {
            if (y >= k) {
                v.push_back(x);
            }
        }

        if (v.empty()) {
            cout << -1 << '\n';
            continue;
        }

        int l1 = 0, r1 = 0;
        int l2 = 0, r2 = 0;
        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i] - v[i - 1] != 1) {
                l1 = i;
            }

            if (i - l1 > r2 - l2) {
                l2 = l1;
                r2 = i;
            }
        }

        cout << v[l2] << ' ' << v[r2] << '\n';
    }

    return 0;
}