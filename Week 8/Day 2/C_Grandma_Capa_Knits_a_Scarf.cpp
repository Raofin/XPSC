#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int res = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++) {
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l < r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == i) {
                    l++;
                    cnt++;
                } else if (s[r] == i) {
                    r--;
                    cnt++;
                } else {
                    cnt = INT_MAX;
                    break;
                }
            }

            if (l >= r) {
                res = min(res, cnt);
            }
        }

        cout << (res == INT_MAX ? -1 : res) << '\n';
    }

    return 0;
}
