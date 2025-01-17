#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, res = 0;
        string s;
        cin >> n >> s;

        for (char c : s) {
            res += (c == '+' ? 1 : -1);
        }
        cout << abs(res) << '\n';
    }

    return 0;
}
