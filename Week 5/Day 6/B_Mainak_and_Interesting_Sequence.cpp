#include "bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        if (m < n) {
            cout << "No\n";
            continue;
        }

        int arr[n];
        if (n % 2 == 0) {
            if (m % 2 != 0) {
                cout << "No\n";
                continue;
            }
            for (int i = 0; i < n - 2; i++) {
                arr[i] = 1;
            }
            int x = (m - (n - 2)) / 2;
            arr[n - 1] = x;
            arr[n - 2] = x;
        } else {
            for (int i = 0; i < n - 1; i++) {
                arr[i] = 1;
            }
            arr[n - 1] = m - (n - 1);
        }

        cout << "YES\n";
        for (int v : arr) {
            cout << v << ' ';
        }
        cout << '\n';
    }

    return 0;
}
