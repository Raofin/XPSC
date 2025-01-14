#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0, flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                cnt++;
            }
            if (i > 0 and i < n - 1) {
                if (s[i - 1] == '.' and s[i] == '.' and s[i + 1] == '.') {
                    cout << 2 << '\n';
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            cout << cnt << '\n';
        }
    }

    return 0;
}