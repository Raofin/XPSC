#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = n - 3; i >= 0; i--) {
            arr[n - 2] -= arr[i];
        }

        cout << arr[n - 1] - arr[n - 2] << '\n';
    }

    return 0;
}