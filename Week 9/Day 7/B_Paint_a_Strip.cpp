#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int res = 1, x = 1;
        while (x < n) {
            x = (x * 2) + 2;
            res++;
        }
        cout << res << '\n';
    }

    return 0;
}
