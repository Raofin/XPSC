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
            if (x > 0) {
                pq.push(x);
            } else if (pq.size() > 0) {
                sum += pq.top();
                pq.pop();
            }
        }
        cout << sum << '\n';
    }

    return 0;
}