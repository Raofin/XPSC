#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string str;
        cin >> n >> k >> str;

        map<char, int> freq;
        while (n--) {
            freq[str[n]]++;
        }

        int c = 0;
        for (auto [ch, x] : freq) {
            if (x % 2 != 0) {
                c++;
            }
        }

        if (c - k <= 1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}