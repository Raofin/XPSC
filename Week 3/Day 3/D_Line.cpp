#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str;
        cin >> n >> str;

        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] != 'L') {
                arr[i] = n - 1 - i;
            } else {
                arr[i] = i;
            }
            sum += arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n; i++) {
            if (arr[i] < n - 1 - arr[i]) {
                sum += n - 1 - (arr[i] * 2);
            }
            cout << sum << ' ';
        }
        cout << '\n';
    }

    return 0;
}