#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (auto &x : arr) {
        cin >> x;
    }

    for (int i = 0; i < q; i++) {
        int key, l = 0, r = n - 1, mid;
        cin >> key;

        bool flag = false;
        while (l <= r) {
            mid = (l + r) / 2;
            if (key == arr[mid]) {
                flag = true;
                break;
            } else if (key < arr[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}