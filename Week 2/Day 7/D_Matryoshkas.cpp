#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;
        map<int, int> frq;

        while (n--) {
            cin >> x;
            frq[x]++;
        }

        int res = 0;
        for (auto [x, cnt] : frq) {
            if (frq.count(x - 1)) {
                cnt -= min(frq[x - 1], cnt);
            }
            res += cnt;
        }

        cout << res << '\n';
    }

    return 0;
}
