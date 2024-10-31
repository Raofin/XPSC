#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str, res;
        cin >> str;

        int low = 0;
        int upp = 0;
        for (int i = str.size() - 1; i >= 0; i--) {
            char ch = str[i];
            if (ch == 'b') {
                low++;
            } else if (low && islower(ch)) {
                low--;
            } else if (ch == 'B') {
                upp++;
            } else if (upp && isupper(ch)) {
                upp--;
            } else {
                res.push_back(ch);
            }
        }

        reverse(res.begin(), res.end());
        cout << res << '\n';
    }

    return 0;
}