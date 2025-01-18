#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    cin >> l;

    int arr[2 * l];
    for (int i = 0; i < l; i++) {
        cin >> arr[i];
        arr[l + i] = arr[i];
    }

    int res = 0, cnt = 0;
    for (int i = 0; i < 2 * l; i++) {
        if (arr[i] == 1) {
            res = max(res, ++cnt);
        } else {
            cnt = 0;
        }
    }

    cout << res << '\n';
    return 0;
}
