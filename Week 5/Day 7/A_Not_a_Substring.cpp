#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        string a = "(";
        string b = string(n, '(') + string(n, ')');

        while (a.size() < n * 2) {
            char ch = a.back() == '(' ? ')' : '(';
            a.push_back(ch);
        }

        if (a.find(s) == -1) {
            cout << "YES\n";
            cout << a << '\n';
        } else if (b.find(s) == -1) {
            cout << "YES\n";
            cout << b << '\n';
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
