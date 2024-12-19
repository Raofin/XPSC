#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll inversions(vector<ll> arr) {
    ll cnt = 0, ones = 0;
    for (auto x : arr) {
        if (x == 1) {
            ones++;
        } else {
            cnt += ones;
        }
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (auto &x : arr) {
            cin >> x;
        }

        int zero = -1;
        ll res = inversions(arr);

        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                zero = i;
                arr[i] = 1;
                break;
            }
        }
        res = max(res, inversions(arr));

        if (zero != -1) {
            arr[zero] = 0;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] == 1) {
                arr[i] = 0;
                break;
            }
        }

        res = max(res, inversions(arr));
        cout << res << '\n';
    }

    return 0;
}
