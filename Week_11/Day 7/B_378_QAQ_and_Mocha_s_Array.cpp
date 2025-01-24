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
        sort(arr, arr + n);

        int g1 = arr[0];
        vector<int> v;
        for (int i = 1; i < n; i++) {
            if (gcd(g1, arr[i]) != g1) {
                v.push_back(arr[i]);
            }
        }

        bool flag = true;
        if (!v.empty()) {
            int g2 = v[0];
            for (int i = 1; i < v.size(); i++) {
                if (gcd(g2, v[i]) != g2) {
                    flag = false;
                    break;
                }
            }
        }

        cout << (flag ? "Yes\n" : "No\n");
    }

    return 0;
}
