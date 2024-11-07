#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        vector<int> v(n);
        for (auto &x : v) {
            cin >> x;
            s.insert(x);
        }

        bool flag = false;
        int l = 0, r = n - 1;
        while (l < r) {
            int a = v[l], b = v[r];
            int min = *s.begin(), max = *s.rbegin();
            if (a == min || a == max) {
                s.erase(a);
                l++;
            } else if (b == min || b == max) {
                s.erase(b);
                r--;
            } else {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << ++l << ' ' << ++r << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}