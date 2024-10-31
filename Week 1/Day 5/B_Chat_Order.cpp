#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<string> stk;
    map<string, bool> mp;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        stk.push(str);
    }

    while (!stk.empty()) {
        string top = stk.top();
        if (!mp[top]) {
            mp[top] = true;
            cout << top << "\n";
        }
        stk.pop();
    }

    return 0;
}