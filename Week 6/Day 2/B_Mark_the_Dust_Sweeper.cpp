#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        long long sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> x;

            if (i < n - 1) {
                if (x > 0) {
                    sum += x;
                    flag = true;
                } else if (x == 0 and flag) {
                    sum += 1;
                }
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
