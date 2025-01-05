#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n], pre[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        pre[i] = sum;
    }

    int m, q, idx;
    cin >> m;
    while (m--) {
        cin >> q;
        idx = lower_bound(pre, pre + n, q) - pre;
        cout << idx + 1 << "\n";
    }

    return 0;
}
