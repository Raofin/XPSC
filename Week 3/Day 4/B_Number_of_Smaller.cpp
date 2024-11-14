#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int &x : a) {
        cin >> x;
    }
    for (int &x : b) {
        cin >> x;
    }

    int ai = 0, bi = 0;
    while (bi < m) {
        if (a[ai] < b[bi] and ai < n) {
            ai++;
        } else {
            bi++;
            cout << ai << ' ';
        }
    }

    return 0;
}