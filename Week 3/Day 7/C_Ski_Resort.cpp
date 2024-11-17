#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        ll cnt = 0, res = 0;

        while (n--) {
            int x;
            cin >> x;

            if (x > q) {
                cnt = 0;
            } else {
                cnt++;
            }

            if (cnt >= k) {
                res += cnt - k + 1;
            }
        }

        cout << res << '\n';
    }

    return 0;
}