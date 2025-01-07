#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, x;
    cin >> n >> x;

    ll arr[n];
    for (auto &x : arr) {
        cin >> x;
    }

    map<ll, int> pre;
    pre[0]++;

    ll res = 0, sum = 0;
    for (auto val : arr) {
        sum += val;
        res += pre[sum - x];
        pre[sum]++;
    }

    cout << res << '\n';
    return 0;
}
