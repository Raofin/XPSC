#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        if (s % n <= b and n * a + b >= s) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}