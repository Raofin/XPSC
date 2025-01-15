#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    int x;
    cin >> x;

    if (x < 10) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
    }

    return 0;
}