#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << (s == "bca" || s == "cab" ? "NO\n" : "YES\n");
    }

    return 0;
}
