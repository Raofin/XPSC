#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int zero = 0, one = 0;
        while (n--) {
            if (s[n] == '0') {
                zero++;
            } else {
                one++;
            }
        }

        if (min(one, zero) % 2) {
            cout << "Zlatan\n";
        } else {
            cout << "Ramos\n";
        }
    }

    return 0;
}
