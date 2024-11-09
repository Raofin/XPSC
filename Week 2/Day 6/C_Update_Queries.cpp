#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int arr[n] = {0};
        for (int i = 0; i < m; i++) {
            int e;
            cin >> e;
            arr[--e]++;
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());

        int i = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] != 0) {
                s[j] = c[i++];
            }
        }
        cout << s << '\n';
    }

    return 0;
}