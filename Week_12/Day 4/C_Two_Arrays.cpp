#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr1[n], arr2[n];
        for (auto &x : arr1) cin >> x;
        for (auto &x : arr2) cin >> x;

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (arr1[i] > arr2[i] || arr2[i] - arr1[i] > 1) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
