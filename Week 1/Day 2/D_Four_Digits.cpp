#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x > 999) {
        cout << x;
    } else if (x > 99) {
        cout << "0" << x;
    } else if (x > 9) {
        cout << "00" << x;
    } else {
        cout << "000" << x;
    }

    cout << '\n';
    return 0;
}