#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        string s;
        cin >> n >> s;

        if (s[0] == 's') s[0] = '.';
        if (s.back() == 'p') s.back() = '.';

        ll ps = 0, sp = 0;
        for (char ch : s) {
            if (ch == 's') ps++;
            if (ch == 'p') sp++;
        }

        cout << (ps && sp ? "NO" : "YES") << '\n';
    }

    return 0;
}
