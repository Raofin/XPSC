#include <bits/stdc++.h>
#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
using namespace std;

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[n];
        string s;
        for (int i = 0; i < n; i++) {
            cin >> s;
            arr[i] = s.length();
        }

        int i, sum = 0;
        for (i = 0; i < n; i++) {
            if (arr[i] + sum > m) {
                break;
            }
            sum += arr[i];
        }

        cout << i << '\n';
    }

    return 0;
}
