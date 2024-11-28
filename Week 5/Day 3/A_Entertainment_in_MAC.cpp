#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string str1;
        cin >> n >> str1;
        string str2 = str1;

        reverse(str2.begin(), str2.end());
        cout << min(str1, str2 + str1) << '\n';
    }

    return 0;
}
