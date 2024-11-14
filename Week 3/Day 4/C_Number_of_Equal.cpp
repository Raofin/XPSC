#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int &x : a) {
        cin >> x;
    }
    for (int &x : b) {
        cin >> x;
    }

    int l = 0, r = 0;
    long long res = 0;
    while (l < n and r < m) {
        int curr = a[l];
        int cnt1 = 0, cnt2 = 0;

        while (l < n and a[l] == curr) {
            l++, cnt1++;
        }
        while (r < m and curr > b[r]) {
            r++;
        }
        while (r < m and b[r] == curr) {
            r++, cnt2++;
        }

        res += 1LL * cnt1 * cnt2;
    }
    cout << res << '\n';

    return 0;
}