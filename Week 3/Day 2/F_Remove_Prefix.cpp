#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        int res = 0;
        int cnt = mp.size();
        for (int i = 0; cnt != n; i++, n--) {
            res++;
            if (--mp[arr[i]] == 0) {
                cnt--;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
