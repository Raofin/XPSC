#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s, res;
        cin >> n >> s;

        for (auto ch : s) {
            res.push_back(ch == '0' ? '1' : '0');
        }

        cout << res << '\n';
    }

    return 0;
}
