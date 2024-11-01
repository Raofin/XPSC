#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, bool> mp;
    while (n--) {
        string str;
        cin >> str;
        if (mp[str]) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
            mp[str] = true;
        }
    }

    return 0;
}