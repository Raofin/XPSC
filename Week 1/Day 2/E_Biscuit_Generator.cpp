#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, t;
    cin >> a >> b >> t;
    t += 0.5;

    int tl = 0;
    int res = 0;
    while (true) {
        tl += a;
        if (tl > t) {
            break;
        }
        res += b;
    }

    cout << res << '\n';
    return 0;
}
