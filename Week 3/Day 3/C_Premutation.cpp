#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n][n - 1];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> a[i][j];
            }
        }

        map<int, int> frq;
        for (int i = 0; i < n; i++) {
            frq[a[i][0]]++;
        }

        int x;
        for (auto [k, v] : frq) {
            if (v == n - 1) {
                cout << k << ' ';
                x = k;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (a[i][0] != x) {
                    cout << a[i][j] << ' ';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}
