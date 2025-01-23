#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        string a, b;
        cin >> n >> m >> a >> b;

        int res = INT_MAX;
        for (int i = 0; i <= n - m; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (a[i + j] != b[j]) {
                    cnt++;
                }
            }
            res = min(res, cnt);
        }

        cout << res << '\n';
    }

    return 0;
}
