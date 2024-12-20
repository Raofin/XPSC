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

        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                cnt++;
            }
        }

        if (cnt == 0 || (cnt == 1 && arr[n - 1] <= arr[0])) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
