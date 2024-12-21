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

        int cnt = 0;
        for (int i = n - 2; i >= 0; i--) {
            while (arr[i] >= arr[i + 1] && arr[i] > 0) {
                arr[i] /= 2;
                cnt++;
            }
            if (arr[i] == arr[i + 1]) {
                cnt = -1;
                break;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}