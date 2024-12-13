#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res, x;
        cin >> n >> res;

        n--;
        while (n--) {
            cin >> x;
            res &= x;
        }

        cout << res << '\n';
    }

    return 0;
}
