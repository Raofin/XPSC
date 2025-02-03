#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m = n / 4;
        n -= 2 * m;
        cout << (n / 2) * m << '\n';
    }

    return 0;
}