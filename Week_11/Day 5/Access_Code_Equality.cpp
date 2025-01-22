#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    string s;
    cin >> s;

    if (s == "WECNITK") {
        cout << "Welcome to Web Club!\n";
    } else {
        cout << "Access denied\n";
    }

    return 0;
}
