#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s, t;
        cin >> n >> s >> t;

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') break;
            if (t[i] == '1') {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
