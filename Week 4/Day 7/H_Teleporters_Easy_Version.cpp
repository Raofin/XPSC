#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i] += i + 1;
        }
        sort(arr, arr + n);

        int res = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];

            if (sum > k) {
                break;
            }

            res++;
        }
        cout << res << '\n';
    }

    return 0;
}
