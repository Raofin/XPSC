#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll minDiff(vector<ll> w, ll sum1, ll sum2, ll idx) {
    if (idx >= w.size()) {
        return abs(sum1 - sum2);
    }
    return min(minDiff(w, sum1 + w[idx], sum2, idx + 1),
               minDiff(w, sum1, sum2 + w[idx], idx + 1));
}

int main() {
    ll n;
    cin >> n;

    vector<ll> w(n);
    for (auto &x : w) {
        cin >> x;
    }
    cout << minDiff(w, 0, 0, 0) << '\n';

    return 0;
}
