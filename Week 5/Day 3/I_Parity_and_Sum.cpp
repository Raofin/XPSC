#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> evn, odd;
        ll x;

        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2) {
                odd.push_back(x);
            } else {
                evn.push_back(x);
            }
        }

        ll cnt = 0;
        if (evn.size() and odd.size()) {
            sort(evn.begin(), evn.end());
            sort(odd.begin(), odd.end());

            x = odd[odd.size() - 1];
            for (int i = 0; i < evn.size(); i++) {
                if (x < evn[i]) {
                    cnt = evn.size() + 1;
                    break;
                }
                x += evn[i];
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}