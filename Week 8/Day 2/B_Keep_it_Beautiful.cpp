#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, prev;
        cin >> n >> prev;
        cout << '1';

        int curr, a = prev, b = 0;
        bool flag = true;
        for (int i = 1; i < n; i++) {
            cin >> curr;
            if (curr >= prev && flag) {
                cout << '1';
                prev = curr;
            } else if (flag && a >= curr) {
                b = curr;
                cout << '1';
                flag = false;
            } else if (!flag && a >= curr && b <= curr) {
                cout << '1';
                b = curr;
            } else {
                cout << '0';
            }
        }
        cout << '\n';
    }

    return 0;
}