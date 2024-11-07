#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        priority_queue<int> pq;

        ll sum = 0;
        while (n--) {
            int x;
            cin >> x;
            if (x == 0 && !pq.empty()) {
                sum += pq.top();
                pq.pop();
            } else {
                pq.push(x);
            }
        }
        cout << sum << '\n';
    }

    return 0;
}