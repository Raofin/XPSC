#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s, ch = "aeiou";
        for (int i = 0, l = 0; i < n; i++) {
            s.push_back(ch[l]);
            if (++l == 5) l = 0;
        }

        sort(s.begin(), s.end());
        cout << s << '\n';
    }

    return 0;
}