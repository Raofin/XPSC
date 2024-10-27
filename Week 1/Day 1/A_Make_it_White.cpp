#include <bits/stdc++.h>
#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char arr[n];

        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (l == -1 && arr[i] == 'B') {
                l = i;
            } else if (arr[i] == 'B') {
                r = i;
            }
        }

        if (r == -1) {
            cout << 1 << '\n';
        } else {
            cout << r - l + 1 << '\n';
        }
    }

    return 0;
}