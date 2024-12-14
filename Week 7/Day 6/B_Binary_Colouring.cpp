#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        vector<int> v;

        while (x) {
            if (x % 2) {
                v.push_back(1);
            } else {
                v.push_back(0);
            }
            x /= 2;
        }
        v.push_back(0);

        int n = v.size();
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == 1 and v[i + 1] == 1) {
                for (int j = i; j < n; j++) {
                    if (v[j] == 0) {
                        v[i] = -1;
                        v[j] = 1;
                        break;
                    }
                    v[j] = 0;
                }
            }
        }

        cout << n << '\n';
        for (int x : v) {
            cout << x << ' ';
        }
        cout << '\n';
    }

    return 0;
}