#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n + 1], c[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    set<int> s;
    for (int i = n; i >= 1; i--) {
        s.insert(a[i]);
        c[i] = s.size();
    }

    for (int i = 1; i <= m; i++) {
        int pos;
        cin >> pos;
        cout << c[pos] << '\n';
    }

    return 0;
}