#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> res;

    int cus = 1;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int money;
            cin >> money;
            s.insert({cus, money});
            ml.insert({money, -cus});
            cus++;
        } else if (type == 2) {
            auto [pos, money] = *s.begin();
            res.push_back(pos);
            s.erase(s.begin());
            ml.erase({money, -pos});
        } else {
            auto [money, pos] = *ml.rbegin();
            res.push_back(-pos);
            ml.erase(--ml.end());
            s.erase({-pos, money});
        }
    }

    for (auto x : res) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}