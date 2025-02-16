#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, neg = 0;
        cin >> n;

        long long x, sum = 0, mn = LLONG_MAX;
        while (n--) {
            cin >> x;
            sum += abs(x);
            mn = min(mn, abs(x));
            if (x < 0) neg++;
        }

        cout << sum - (neg % 2 ? mn * 2 : 0) << '\n';
    }

    return 0;
}
