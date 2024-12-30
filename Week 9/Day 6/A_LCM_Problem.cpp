#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (m / n <= 1) {
            cout << -1 << ' ' << -1 << '\n';
        } else {
            cout << n << ' ' << n + n << '\n';
        }
    }

    return 0;
}
