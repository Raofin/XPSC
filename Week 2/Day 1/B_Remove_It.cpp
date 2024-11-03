#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x;

    while (n--) {
        cin >> y;
        if (x != y) {
            cout << y << ' ';
        }
    }
    cout << '\n';

    return 0;
}