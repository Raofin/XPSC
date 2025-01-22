#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n, x, res = 0;
        cin >> n >> x;
        int arr[n];

        for (int &val : arr) {
            cin >> val;
            res += val;
        }
        cout << (res + x - 1) / x << '\n';
    }

    return 0;
}
