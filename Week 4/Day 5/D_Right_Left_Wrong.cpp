#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        ll pre[n + 1];
        pre[0] = 0;

        for (int i = 1; i <= n; i++) {
            cin >> x;
            pre[i] = pre[i - 1] + x;
        }

        string str;
        cin >> str;

        ll l = 0, r = n - 1, res = 0;
        while (l < r) {
            if (str[l] == 'L' and str[r] == 'R') {
                res += (pre[r + 1] - pre[l]);
                l++, r--;
            } else if (str[l] != 'L') {
                l++;
            } else if (str[r] != 'R') {
                r--;
            }
        }

        cout << res << '\n';
    }

    return 0;
}