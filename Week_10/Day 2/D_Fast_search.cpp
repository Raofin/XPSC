#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (auto &x : arr) {
        cin >> x;
    }
    sort(arr.begin(), arr.end());

    int k;
    cin >> k;
    while (k--) {
        int l, r;
        cin >> l >> r;

        auto it1 = lower_bound(arr.begin(), arr.end(), l);
        auto it2 = upper_bound(arr.begin(), arr.end(), r);

        cout << it2 - it1 << ' ';
    }

    return 0;
}
