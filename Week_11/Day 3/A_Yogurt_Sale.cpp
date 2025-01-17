#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        b = min(b, 2 * a);
        cout << (n / 2) * b + (n % 2) * a << '\n';
    }

    return 0;
}
