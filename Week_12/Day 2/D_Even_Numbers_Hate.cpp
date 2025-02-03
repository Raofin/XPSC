#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x, odd = 0, even = 0;
        while (n--) {
            cin >> x;
            if (x % 2) {
                odd++;
            } else {
                even++;
            }
        }

        if (odd == 0) {
            cout << 0 << '\n';
        } else {
            cout << even + --odd / 2 + 1 << '\n';
        }
    }

    return 0;
}
