#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string str1, str2;
    map<string, string> mp;

    while (n--) {
        cin >> str1 >> str2;
        mp[str2 + ";"] = str1;
    }

    while (m--) {
        cin >> str1 >> str2;
        cout << str1 << " " << str2 << " #" << mp[str2] << '\n';
    }

    return 0;
}