#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
    int x = 0, p = 1;
    while (n > 1) {
        x += (n & 1) ? 7 * p : 4 * p;
        n >>= 1;
        p *= 10;
    }
    return x;
}

int main() {
    int n;
    cin >> n;

    int x = 2;
    while (fun(x) != n) x++;
    cout << x - 1 << '\n';

    return 0;
}
