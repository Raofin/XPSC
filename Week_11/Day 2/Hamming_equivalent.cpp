#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

int cnt(int x) {
    int cnt = 0;
    while (x > 0) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int main() {
    fastio();
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n], arr2[n];
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr2[i] = arr[i];
            mp[cnt(arr[i])].push_back(arr[i]);
        }
        sort(arr2, arr2 + n);

        bool flag = true;
        for (auto [x, y] : mp) {
            sort(y.begin(), y.end());

            int idx = 0;
            for (int i = 0; i < n && flag; i++) {
                if (cnt(arr[i]) == x && y[idx++] != arr2[i]) {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "Yes" : "No") << '\n';
    }

    return 0;
}
