#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        int l = 0, r = n - 1, ans = n;
        while (l <= r) {
            if (str[l] == str[r]) {
                break;
            }
            ans -= 2;
            l++, r--;
        }
        cout << ans << '\n';
    }

    return 0;
}