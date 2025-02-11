#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int &x : arr) {
            cin >> x;
        }

        long long res = 0;
        int i = 0;
        while (i < n - 1 && arr[i] != 0) {
            i++;
        }

        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == 0) continue;
            i = max(i, j);

            while (i < n - 1 && arr[i] != 0) {
                i++;
            }

            while (i < n - 1 && arr[j] > 0) {
                arr[j]--, arr[i]++, res++;

                while (i < n - 1 && arr[i] != 0) {
                    i++;
                }
            }
            res += arr[j];
        }
        cout << res << '\n';
    }

    return 0;
}
