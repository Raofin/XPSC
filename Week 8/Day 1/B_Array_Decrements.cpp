#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        bool flag = false;
        int dec = -1, maxDec = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                flag = true;
                break;
            }

            if (b[i] and dec == -1) {
                dec = a[i] - b[i];
            } else if (b[i] and a[i] - b[i] != dec) {
                flag = true;
                break;
            } else {
                maxDec = max(maxDec, a[i] - b[i]);
            }
        }

        flag = !flag and (dec == -1 or maxDec <= dec);
        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
