#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int days[n][5];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> days[i][j];
            }
        }

        bool flag = false;
        for (int d1 = 0; d1 < 5; d1++) {
            for (int d2 = d1 + 1; d2 < 5; d2++) {
                int cnt1 = 0, cnt2 = 0, both = 0;
                for (int i = 0; i < n; i++) {
                    if (days[i][d1] && days[i][d2]) {
                        both++;
                    } else if (days[i][d1]) {
                        cnt1++;
                    } else if (days[i][d2]) {
                        cnt2++;
                    }
                }

                if (cnt1 <= n / 2 && cnt2 <= n / 2 && cnt1 + cnt2 + both == n) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
