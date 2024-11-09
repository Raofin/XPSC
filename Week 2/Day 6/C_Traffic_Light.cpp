#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        string str;
        cin >> n >> ch >> str;
        str += str;

        int x = INT_MIN;
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ch) {
                int c = 0;
                while (i < str.size() && str[i] != 'g') {
                    c++, i++;
                }
                x = max(x, c);
            }
        }
        cout << x << endl;
    }

    return 0;
}