#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m < n / 2.0) {
        cout << "PRO" << '\n';
    } else {
        cout << "NEWBIE" << '\n';
    }

    return 0;
}