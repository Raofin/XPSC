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

    int q;
    cin >> q;

    while (q--) {
        int m;
        cin >> m;

        auto it = upper_bound(arr.begin(), arr.end(), m);
        cout << it - arr.begin() << '\n';
    }

    return 0;
}
