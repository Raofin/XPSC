#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int x, res = 0;
        unordered_map<int, int> mp;
        while (n--) {
            cin >> x;
            mp[x]++;
        }

        for (auto [x, y] : mp) {
            res += y / 3;
        }
        cout << res << '\n';
    }

    return 0;
}
