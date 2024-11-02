#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    map<int, int> freq;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
        cnt = max(cnt, freq[x]);
    }

    cout << cnt << '\n';
    return 0;
}
