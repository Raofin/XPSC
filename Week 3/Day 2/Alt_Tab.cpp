#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<string, int> mp;
    for (int i = --n; i >= 0; i--) {
        if (!mp.count(arr[i])) {
            int len = arr[i].size() - 1;
            cout << arr[i][len - 1] << arr[i][len];
        }
        mp[arr[i]] = i;
    }

    return 0;
}