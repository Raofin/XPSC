#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        ll sum = 0, cnt = 0;
        bool flag = false;
        cin >> n;

        while (n--) {
            cin >> x;
            sum += abs(x);

            if (x > 0 and flag) {
                flag = false;
            } else if (x < 0 and !flag) {
                cnt++;
                flag = true;
            }
        }

        cout << sum << ' ' << cnt << '\n';
    }

    return 0;
}