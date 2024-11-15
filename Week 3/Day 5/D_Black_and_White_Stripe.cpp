#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string str;
        cin >> n >> k >> str;

        int res = INT_MAX;
        int l = 0, r = 0, w = 0;

        while (r < n) {
            if (str[r] == 'W') {
                w++;
            }
            if (r - l + 1 == k) {
                res = min(res, w);
                if (str[l] == 'W') {
                    w--;
                }
                l++;
            }
            r++;
        }

        cout << res << '\n';
    }

    return 0;
}