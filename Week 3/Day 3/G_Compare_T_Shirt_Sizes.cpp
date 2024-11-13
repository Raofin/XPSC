#include <bits/stdc++.h>
using namespace std;

int size(string str) {
    int res = 0;

    if (str.back() == 'S') {
        res = -str.size() - 2;
    } else if (str.back() == 'L') {
        res = str.size();
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        int sa = size(a);
        int sb = size(b);

        if (sa < sb) {
            cout << '<' << '\n';
        } else if (sa > sb) {
            cout << '>' << '\n';
        } else {
            cout << '=' << '\n';
        }
    }

    return 0;
}