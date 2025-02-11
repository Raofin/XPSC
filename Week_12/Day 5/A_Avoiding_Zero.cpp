#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        long long sum = 0;

        for (int &x : arr) {
            cin >> x;
            sum += x;
        }

        if (sum == 0) {
            cout << "NO\n";
            continue;
        }

        if (sum > 0) {
            sort(arr, arr + n, greater<int>());
        } else {
            sort(arr, arr + n);
        }

        cout << "YES\n";
        for (int x : arr) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}
