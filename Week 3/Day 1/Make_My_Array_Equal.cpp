#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;
        map<int, int> mp;

        while (n--) {
            cin >> x;
            if (x) mp[x]++;
        }

        if (mp.size() < 2) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}