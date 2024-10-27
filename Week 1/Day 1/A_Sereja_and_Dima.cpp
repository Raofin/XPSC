#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++) {
        cin >> dq[i];
    }

    int a = 0, b = 0, max;
    for (int i = 0; i < n; i++) {
        int l = dq.front();
        int r = dq.back();

        if (l > r) {
            max = l;
            dq.pop_front();
        } else {
            max = r;
            dq.pop_back();
        }

        if (i % 2 == 0) {
            a += max;
        } else {
            b += max;
        }
    }

    cout << a << " " << b << '\n';

    return 0;
}