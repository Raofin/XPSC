#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int idx = 0;
        for (int i = 1; i < str.size(); i++) {
            if (str[i] == str[i - 1]) {
                idx = i;
                break;
            }
        }

        string res;
        for (int i = 0; i < str.size(); i++) {
            if (i == idx) {
                char ch;
                if (str[i] == 'z') {
                    ch = 'x';
                } else {
                    ch = str[i] + 1;
                }
                res += ch;
            }
            res += str[i];
        }
        cout << res << '\n';
    }

    return 0;
}
