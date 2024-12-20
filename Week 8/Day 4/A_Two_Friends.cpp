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
        for (int i = 0; i < n; i++) {
            if (arr[arr[i] - 1] == i + 1) {
                cnt++;
            }
        }

        cout << (cnt >= 1 ? 2 : 3) << '\n';
    }

    return 0;
}
