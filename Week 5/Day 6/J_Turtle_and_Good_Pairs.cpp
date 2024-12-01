#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        priority_queue<pair<int, char>> pq;
        for (auto [ch, cnt] : freq) {
            pq.push({cnt, ch});
        }

        int i = 0;
        string res(n, 0);
        while (!pq.empty()) {
            auto [ch, cnt] = pq.top();
            pq.pop();

            while (ch--) {
                if (i >= n) {
                    i = 1;
                }
                res[i] = cnt;
                i += 2;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
