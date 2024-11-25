#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int& x : vec) {
            cin >> x;
        }

        map<char, int> mp;
        char ch = 'a';

        for (int i = 0; i < n; i++) {
            if (vec[i] == 0) {
                cout << ch;
                mp[ch]++, ch++;
                continue;
            }
            for (auto& [k, v] : mp) {
                if (v == vec[i]) {
                    cout << k;
                    mp[k]++;
                    break;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}