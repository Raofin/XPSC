#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double x = a % c;
    if (x != 0) {
        a += c - x;
    }

    if (a <= b) {
        cout << a << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
