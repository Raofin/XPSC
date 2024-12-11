#include <bits/stdc++.h>
using namespace std;

int diff(int a, int b) {
    int diff = 0;
    while (a || b) {
        if ((a % 2) != (b % 2)) {
            diff++;
        }
        a /= 2;
        b /= 2;
    }
    return diff;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> v[i];
    }

    int res = 0;
    for (int i = 0; i < m; i++) {
        if (diff(v[m], v[i]) <= k) {
            res++;
        }
    }

    cout << res << '\n';
    return 0;
}
