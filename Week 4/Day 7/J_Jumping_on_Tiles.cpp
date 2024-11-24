#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

bool cmp(pll p1, pll p2) {
    return (p1.first != p2.first)
               ? (p1.first > p2.first)
               : (p1.second < p2.second);
}
int main() {
    ll t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        map<char, ll> mp;

        ll x = 0;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            mp[ch] = ++x;
        }

        ll fst = mp[str[0]];
        ll lst = mp[str[str.size() - 1]];
        vector<pll> res;

        for (ll i = 0; i < str.size(); i++) {
            x = mp[str[i]];
            if (x >= min(fst, lst) && x <= max(fst, lst)) {
                res.push_back({x, i + 1});
            }
        }

        if (fst >= lst) {
            sort(res.begin(), res.end(), cmp);
        } else {
            sort(res.begin(), res.end());
        }

        cout << abs(fst - lst) << ' ' << res.size() << '\n';
        for (ll i = 0; i < res.size(); i++) {
            cout << res[i].second;
            if (i == res.size() - 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
    }

    return 0;
}
