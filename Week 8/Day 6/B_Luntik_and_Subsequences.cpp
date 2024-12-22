#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        long long one = 0, zero = 1;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x == 0) {
                zero *= 2;
            } else if (x == 1) {
                one++;
            }
        }
        cout << one * zero << '\n';
    }

    return 0;
}
