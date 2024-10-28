#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = max(a, b) * 2;
    if (a != b) {
        res--;
    }

    cout << res << '\n';
    return 0;
}