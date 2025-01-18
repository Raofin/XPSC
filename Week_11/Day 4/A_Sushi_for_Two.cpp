#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    v.push_back(0);

    int x, last = -1, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == last) {
            cnt++;
        } else {
            if (cnt > 0) v.push_back(cnt);
            cnt = 1;
            last = x;
        }
    }
    v.push_back(cnt);

    int res = 0;
    for (int i = 1; i < v.size(); i++) {
        res = max(res, 2 * min(v[i], v[i - 1]));
    }

    cout << res << '\n';
    return 0;
}
