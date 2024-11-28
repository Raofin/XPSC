#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;

        int p = 1;
        int q = n * n;
        for (int i = 1; i <= n * n; i++) {
            if (i % 2 == 1) {
                v.push_back(p++);
            } else {
                v.push_back(q--);
            }
        }

        p = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) {
                for (int j = p; j < p + n; j++) {
                    cout << v[j] << ' ';
                }
            } else {
                for (int j = n + p; j > p; j--) {
                    cout << v[j - 1] << ' ';
                }
            }
            cout << '\n';
            p += n;
        }
    }

    return 0;
}