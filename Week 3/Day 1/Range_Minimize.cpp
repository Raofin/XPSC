#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int op1 = arr[n - 1] - arr[2];
        int op2 = arr[n - 2] - arr[1];
        int op3 = arr[n - 3] - arr[0];
        int res = min({op1, op3, op2});

        cout << res << '\n';
    }

    return 0;
}