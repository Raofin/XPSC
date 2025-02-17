#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (auto &x : a) {
            cin >> x;
        }

        sort(a, a + n);
        a[0]++;

        long long r = 1;
        for (auto &x : a) {
            r *= x;
        }

        cout << r << '\n';
    }

    return 0;
}
