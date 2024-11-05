#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string str1, str2;
        cin >> n >> str1 >> str2;

        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (str1[i] == 'G') {
                str1[i] = 'B';
            }
            if (str2[i] == 'G') {
                str2[i] = 'B';
            }
            if (str1[i] != str2[i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}