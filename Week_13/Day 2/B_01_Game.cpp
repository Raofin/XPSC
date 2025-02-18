#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (char ch : s) {
            if (ch == '0') {
                cnt0++;
            } else {
                cnt1++;
            }
        }

        cout << (min(cnt0, cnt1) % 2 ? "DA\n" : "NET\n");
    }

    return 0;
}
