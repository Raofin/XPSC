#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, s;
    cin >> n >> s;

    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    int l = 0;
    ll sum = 0, res = 0;
    for (int r = 0; r < n; r++) {
        sum += v[r];
        while (sum >= s) {
            sum -= v[l++];
        }
        res += l;
    }

    cout << res << '\n';
    return 0;
}
