#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (auto &x : a) {
            cin >> x;
        }

        int mx = -1, res[n] = {0};
        for (int i = 0; i < n; i++) {
            if (a[i] > mx) {
                res[i] = 1;
                mx = a[i];
            }
        }

        for (auto x : res) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}
