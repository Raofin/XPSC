#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] != 'z') {
                s[i] = 'z';
                flag = false;
            }
        }

        cout << (flag ? "-1" : s) << '\n';
    }

    return 0;
}
