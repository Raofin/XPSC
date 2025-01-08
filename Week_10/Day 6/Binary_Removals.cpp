#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        ll n, k, x;
        string s;
        cin >> n >> k >> x >> s;

        ll z = 0, o = 0;
        for (char ch : s) {
            if (ch == '1') {
                o++;
            } else {
                z += o;
            }
        }

        cout << (z > k or z % x ? 2 : 1) << '\n';
    }

    return 0;
}
