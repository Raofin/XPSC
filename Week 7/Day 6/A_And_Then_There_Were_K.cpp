#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res = 0;
        cin >> n;

        while (n > 1) {
            n >>= 1;
            res++;
        }

        cout << (1 << res) - 1 << '\n';
    }

    return 0;
}
