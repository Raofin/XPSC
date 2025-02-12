#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> mp;
        int arr[n], res, flag = false;
        for (auto x : arr) {
            cin >> x;
            if (++mp[x] > 1 && !flag) {
                flag = true;
                res = x;
            }
        }

        if (flag) {
            cout << "1\n";
            cout << res << '\n';
        } else {
            cout << "-1\n";
        }
    }

    return 0;
}
