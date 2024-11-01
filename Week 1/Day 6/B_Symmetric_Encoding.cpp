#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        int freq[26] = {0};
        for (char c : str) {
            freq[c - 'a'] = 1;
        }

        int l = 0, r = 25;
        while (l < r) {
            if (!freq[l]) {
                l++;
            } else if (!freq[r]) {
                r--;
            } else {
                freq[l] = r;
                freq[r] = l;
                l++, r--;
            }
        }

        if (l == r) {
            freq[l] = l;
        }

        for (char c : str) {
            char ch = 'a' + freq[c - 'a'];
            cout << ch;
        }
        cout << '\n';
    }

    return 0;
}