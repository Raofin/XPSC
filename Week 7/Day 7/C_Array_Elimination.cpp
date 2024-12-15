#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int &x : v) {
            cin >> x;
        }

        int cnt[33] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= 32; j++) {
                if ((v[i] >> j) & 1) {
                    cnt[j]++;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            bool flag = true;
            for (int j = 0; j <= 32; j++) {
                if (cnt[j] % i) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                cout << i << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
