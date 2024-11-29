#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, char> p1, pair<int, char> p2) {
    return p1.first > p2.first;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        map<char, int> mp;
        for (char ch : str) {
            mp[ch]++;
        }

        vector<pair<int, char>> vp1;
        for (auto [x, y] : mp) {
            vp1.push_back({y, x});
        }
        sort(vp1.begin(), vp1.end(), cmp);

        string res;
        while (!vp1.empty()) {
            vector<pair<int, char>> vp2;
            for (auto &[x, y] : vp1) {
                if (--x > 0) {
                    vp2.push_back({x, y});
                }
                res.push_back(y);
            }
            vp1 = vp2;
        }
        cout << res << '\n';
    }

    return 0;
}
