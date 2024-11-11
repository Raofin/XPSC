#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    float fav = x + y * 0.5;
    float opp = z + y * 0.5;
    fav += 4 - (x + y + z);

    if (fav > opp) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }

    return 0;
}