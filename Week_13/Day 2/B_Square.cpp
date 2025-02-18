#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int mx1 = max(a1, b1);
        int mx2 = max(a2, b2);
        int mn2 = min(a2, b2);
        int mn1 = min(a1, b1);

        bool flag = mn1 + mn2 == mx1 && mx1 == mx2;

        cout << (flag ? "Yes" : "No") << '\n';
    }

    return 0;
}
