#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    int l = 0, r = 0;
    long long sum = 0, res = 0;
    while (r < n) {
        sum += v[r];
        if (sum <= k) {
            res += (r - l + 1);
        } else {
            while (sum > k && l <= r) {
                sum -= v[l];
                l++;
            }
            if (sum <= k) {
                res += (r - l + 1);
            }
        }
        r++;
    }
    cout << res << '\n';

    return 0;
}