#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int res = 0;
        for (auto [x, y] : freq) {
            if (x != '?') {
                res += min(y, n);
            }
        }

        cout << res << '\n';
    }

    return 0;
}