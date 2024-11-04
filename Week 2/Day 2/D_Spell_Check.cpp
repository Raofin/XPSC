#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        sort(str.begin(), str.end());

        bool flag = str == "Timru";
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}