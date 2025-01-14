#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
        }

        sort(v.begin(), v.end());
        int med = (n + 1) / 2 - 1;
        int up = upper_bound(v.begin(), v.end(), v[med]) - v.begin();

        cout << up - med << '\n';
    }

    return 0;
}
