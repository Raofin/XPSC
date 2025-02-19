#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n + 1, 0);
        int a = 0, b = 0;
        for (int i = 0, x; i < n; i++) {
            cin >> x;
            v[x]++;
        }

        for (int i = 1; i <= n; i++) {
            a += (v[i] % 2);
            b += (v[i] / 2);
        }

        cout << a + (b + v[0] > 0) << '\n';
    }

    return 0;
}
