#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]] = i;
        }

        string str;
        cin >> str;

        set<pair<int, int>> s;
        for (int i = 0; i < n; i++) {
            s.insert({str[i] - '0', arr[i]});
        }

        int cnt = 1, res[n];
        for (auto [v, r] : s) {
            res[mp[r]] = cnt++;
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
