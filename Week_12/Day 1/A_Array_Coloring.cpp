#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x, sum = 0;
        while (n--) {
            cin >> x;
            sum += x;
        }

        cout << (sum % 2 ? "NO\n" : "YES\n");
    }

    return 0;
}
