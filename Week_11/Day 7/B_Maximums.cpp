#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int b, x = 0;
    while (n--) {
        cin >> b;
        b += x;
        x = max(x, b);
        cout << b << ' ';
    }
    cout << '\n';

    return 0;
}
