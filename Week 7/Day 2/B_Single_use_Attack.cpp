#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        k = n - k;
        int res = (k / m) + 1;

        if (k % m) {
            res++;
        }
        cout << res << '\n';
    }

    return 0;
}