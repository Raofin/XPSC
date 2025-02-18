#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        bool flag = false;
        for (int i = 0; i < 8; i++) {
            string row;
            cin >> row;
            if (row == "RRRRRRRR") flag = true;
        }

        cout << (flag ? "R\n" : "B\n");
    }

    return 0;
}
