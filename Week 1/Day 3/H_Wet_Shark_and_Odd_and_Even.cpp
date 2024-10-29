#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    ll n, x;
    cin >> n;

    ll Min = 10e9;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if (x % 2 != 0 && Min > x) {
            Min = x;
        }
    }

    if (sum % 2 != 0) {
        sum -= Min;
    }

    cout << sum << '\n';
    return 0;
}
