#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, x;
        cin >> n >> a;
        b = a;

        n--;
        while (n--) {
            cin >> x;
            a |= x;
            b &= x;
        }

        cout << a - b << '\n';
    }

    return 0;
}
