#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        map<char, int> freq;
        for (char c : str) {
            freq[c]++;
        }

        int ns = min(freq['N'], freq['S']);
        int ew = min(freq['E'], freq['W']);

        freq['N'] -= ns;
        freq['S'] -= ns;
        freq['E'] -= ew;
        freq['W'] -= ew;

        int sum = ns + ew;
        int rem = str.length() - sum * 2;
        if (freq['N'] % 2 || freq['W'] % 2 || freq['E'] % 2 || freq['S'] % 2 || (rem == 0 && sum < 2)) {
            cout << "NO" << '\n';
            continue;
        }

        map<char, int> mp;
        if (ns) {
            mp['N']++;
            mp['S']++;
        } else if (ew) {
            mp['E']++;
            mp['W']++;
        }

        mp['E'] += freq['E'] / 2;
        mp['S'] += freq['S'] / 2;
        mp['W'] += freq['W'] / 2;
        mp['N'] += freq['N'] / 2;

        string res = "";
        for (char c : str) {
            if (mp[c]) {
                res.push_back('R');
                mp[c]--;
            } else {
                res.push_back('H');
            }
        }
        cout << res << '\n';
    }

    return 0;
}
