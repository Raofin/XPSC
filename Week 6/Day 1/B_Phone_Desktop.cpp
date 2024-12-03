#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int s, d;
        cin >> s >> d;

        int scrD = (d + 1) / 2;
        int remC = (d / 2) * 7 + (d % 2) * 11;
        int remS = max(0, s - remC);
        int scrS = (remS + 14) / 15;
        int res = scrD + scrS;

        cout << res << '\n';
    }

    return 0;
}
