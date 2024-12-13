#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int l = 0, r = n - 1;
        int mis = 0, mat = 0;

        while (l < r) {
            if (s[l] == s[r]) {
                mat += 2;
            } else {
                mis++;
            }
            l++, r--;
        }

        bool flag = l == r;
        if (flag) mat++;

        for (int k = 0; k <= n; k++) {
            if (k < mis or (!flag and (k - mis) % 2 == 1) or k > (mis + mat)) {
                cout << "0";
            } else {
                cout << "1";
            }
        }
        cout << '\n';
    }

    return 0;
}
