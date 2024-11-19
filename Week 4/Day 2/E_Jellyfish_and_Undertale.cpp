#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, n, x;
        cin >> a >> b >> n;
        long long res = b;

        while (n--) {
            cin >> x;
            res += min(x, a - 1);
        }
        cout << res << '\n';
    }

    return 0;
}