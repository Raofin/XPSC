#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << (n - 1 >= m ? "YES" : "NO") << '\n';
    }

    return 0;
}