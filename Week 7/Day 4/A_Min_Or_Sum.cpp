#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        int res = 0;
        while (n--) {
            cin >> x;
            res |= x;
        }
        cout << res << '\n';
    }

    return 0;
}
