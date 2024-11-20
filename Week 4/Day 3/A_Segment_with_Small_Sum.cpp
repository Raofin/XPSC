#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0, res = 0;
    ll sum = 0;
    while (r < n) {
        sum += arr[r];
        if (sum <= k) {
            res = max(res, r - l + 1);
        } else {
            sum -= arr[l];
            l++;
        }
        r++;
    }

    cout << res << '\n';

    return 0;
}