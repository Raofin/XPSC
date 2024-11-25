#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b, c;
        cin >> n >> a >> b >> c;

        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (c[i] != a[i] and c[i] != b[i]) {
                flag = true;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
