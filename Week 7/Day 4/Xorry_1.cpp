#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, pos = 0;
        cin >> x;

        while (x >> pos) {
            pos++;
        }

        int b = 1 << --pos;
        int a = x ^ b;
        cout << a << ' ' << b << '\n';
    }

    return 0;
}
