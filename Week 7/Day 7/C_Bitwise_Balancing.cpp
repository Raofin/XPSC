#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long b, c, d;
        cin >> b >> c >> d;

        bool flag = true;
        long long mask = 1, res = 0;
        for (int i = 0; i <= 61; i++) {
            bool bb = (b & mask) != 0;
            bool bc = (c & mask) != 0;
            bool bd = (d & mask) != 0;

            if ((bb && !bc && !bd) || (!bb && bc && bd)) {
                flag = 0;
                break;
            }

            if (bb && bc) {
                res += (1ll - bd) * mask;
            } else {
                res += bd * mask;
            }

            mask <<= 1;
        }

        cout << (flag ? res : -1) << '\n';
    }

    return 0;
}
