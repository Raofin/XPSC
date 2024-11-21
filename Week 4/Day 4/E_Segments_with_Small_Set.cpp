#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    map<int, int> frq;
    long long res = 0;
    int l = 0, r = 0;

    while (r < n) {
        frq[v[r]]++;
        while (frq.size() > k) {
            frq[v[l]]--;
            if (frq[v[l]] == 0) {
                frq.erase(v[l]);
            }
            l++;
        }
        res += (r - l + 1);
        r++;
    }

    cout << res << '\n';
    return 0;
}
