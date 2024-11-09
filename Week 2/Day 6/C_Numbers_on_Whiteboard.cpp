#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            pq.push(i + 1);
        }

        cout << 2 << '\n';
        while (pq.size() > 1) {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            int c = a + b;
            if (c % 2 != 0) {
                c++;
            }
            pq.push(c / 2);

            cout << a << " " << b << '\n';
        }
    }

    return 0;
}