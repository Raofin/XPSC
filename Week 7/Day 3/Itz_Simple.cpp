#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        vector<int> v(n);
        for (int &x : v) cin >> x;
        sort(v.rbegin(), v.rend());

        int h = k + v[0];
        v.erase(v.begin());
        for (int x : v) p += x;

        if (h < p) {
            cout << "Varun" << '\n';
        } else if (h > p) {
            cout << "Ved" << '\n';
        } else {
            cout << "Equal" << '\n';
        }
    }

    return 0;
}
