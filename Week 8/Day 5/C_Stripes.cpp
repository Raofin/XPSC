#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int cnt = 0;
        string str;
        for (int i = 0; i < 8; i++) {
            cin >> str;
            if (str == "RRRRRRRR") {
                cnt++;
            }
        }

        if (cnt < 1) {
            cout << "B" << '\n';
        } else {
            cout << "R" << '\n';
        }
    }

    return 0;
}