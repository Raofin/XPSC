#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (auto &x : arr) {
            cin >> x;
        }

        sort(arr, arr + n);

        int a = 0, b = 0;
        for (auto x : arr) {
            if (x == a) {
                a++;
            } else if (x == b) {
                b++;
            }
        }

        cout << a + b << '\n';
    }

    return 0;
}
