#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << (n / 2) + (n % 2) << '\n';

        int l = 1;
        int r = 3 * n;
        while (l < r) {
            cout << l << ' ' << r << '\n';
            l += 3;
            r -= 3;
        }
    }

    return 0;
}