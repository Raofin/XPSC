#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, string> ori, neu;

    while (n--) {
        string a, b;
        cin >> a >> b;

        string x;
        if (ori.count(a)) {
            x = ori[a];
        } else {
            x = a;
        }

        ori[b] = x;
        neu[x] = b;
    }

    cout << neu.size() << '\n';
    for (auto [x, y] : neu) {
        cout << x << " " << y << '\n';
    }

    return 0;
}
