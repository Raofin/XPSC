#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++) {
                cout << (i % 2 ? 1 : -1) << ' ';
            }
        } else {
            if (n == 3) {
                cout << "NO" << '\n';
                continue;
            }
            cout << "YES" << '\n';

            int a = n / 2 - 1;
            int b = -(n / 2);
            for (int i = 0; i < n; i++) {
                cout << (i % 2 == 0 ? a : b) << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
