#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = "bbaa";
    if (n != 2) {
        for (int i = 0; i < n; i++) {
            cout << str[i % 4];
        }
    } else {
        cout << "ab\n";
    }

    return 0;
}
