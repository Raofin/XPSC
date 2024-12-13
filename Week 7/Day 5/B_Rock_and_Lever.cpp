#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        ll freq[33] = {0};

        ll x, res = 0;
        while (n--) {
            cin >> x;
            int bits = 0;
            while (x > 0) {
                x /= 2;
                bits++;
            }
            freq[bits]++;
        }

        for (int i = 0; i < 33; i++) {
            if (freq[i] >= 2) {
                res += (freq[i] * (freq[i] - 1)) / 2;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
