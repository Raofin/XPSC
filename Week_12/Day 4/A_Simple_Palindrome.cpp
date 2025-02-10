#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = "aeiou";
        for (int i = 0; i < 5; i++) {
            int x = n / 5 + (i < (n % 5));
            while (x--) cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}
