#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int a = 0, b = 0;
        for (int i = 31; i >= 0; i--) {
            if ((x >> i) & 1) {
                a++;
            } else if (a >= 2) {
                b++;
            }
        }
        cout << (1 << b) << '\n';
    }

    return 0;
}
