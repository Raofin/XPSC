#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1' || b[i] == '1') {
                c1++;
            }
            if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')) {
                c2++;
            }
        }

        cout << (c2 > 0 || c1 % 2 == 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}
