#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        sort(arr + 1, arr + 1 + n);

        int cnt = 0;
        int idx = (n + 1) / 2;
        for (int i = idx; i <= n; i++) {
            if (arr[idx] == arr[i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
