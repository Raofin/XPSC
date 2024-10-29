#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    bool freq[26] = {false};
    for (char c : str) {
        freq[c - 'a'] = true;
    }

    string x = "None";
    for (char i = 'a'; i <= 'z'; i++) {
        if (!freq[i - 'a']) {
            x = i;
            break;
        }
    }

    cout << x << '\n';
    return 0;
}
