#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, x;
    cin >> n;

    int arr[n];
    for (auto &x : arr) {
        cin >> x;
    }

    ll res = 0, sum = 0;
    map<ll, ll> pre;
    pre[0]++;

    for (auto x : arr) {
        sum += x % n;
        sum = (sum + n) % n;
        res += pre[sum];
        pre[sum]++;
    }

    cout << res << '\n';
    return 0;
}
