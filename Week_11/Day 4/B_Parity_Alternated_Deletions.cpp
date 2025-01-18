#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> odd, evn;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x & 1) {
            odd.push_back(x);
        } else {
            evn.push_back(x);
        }
    }

    if (evn.size() < odd.size()) {
        swap(odd, evn);
    }
    sort(evn.begin(), evn.end());

    int rm = 0;
    if (evn.size() > odd.size() + 1) {
        rm = evn.size() - odd.size() - 1;
    }

    int res = 0;
    for (int i = 0; i < rm; i++) {
        res += evn[i];
    }

    cout << res << '\n';
    return 0;
}
