#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n;

        ll preMax = -1, preSum = 0, res = 0;
        while (n--) {
            cin >> x;
            preMax = max(preMax, x);
            preSum += x;
            if (preSum - preMax == preMax) {
                res++;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
