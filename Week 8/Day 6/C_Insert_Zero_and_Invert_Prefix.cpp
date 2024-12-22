#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (auto &x : a) {
            cin >> x;
        }

        vector<int> res;
        if (a[n - 1] == 1) {
            cout << "NO\n";
            continue;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 0) {
                res.push_back(0);
                continue;
            }

            int cnt = 0;
            while (a[i] == 1 && i >= 0) {
                cnt++, i--;
            }
            i++;

            for (int j = 1; j < cnt; j++) {
                res.push_back(0);
            }
            res.push_back(cnt);
        }

        cout << "YES\n";
        for (int x : res) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
