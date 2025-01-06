#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> freq;
    for (auto ch : s) {
        freq[ch]++;
    }

    char ch;
    int odd = 0;
    for (auto [k, v] : freq) {
        if (v % 2) {
            odd++;
            ch = k;
        }
    }

    if ((s.size() % 2 == 0 && odd > 0) || (s.size() % 2 && odd > 1)) {
        cout << "NO SOLUTION\n";
        return 0;
    }

    deque<char> dq;
    if (s.size() % 2) {
        dq.push_back(ch);
        freq[ch]--;
    }
    for (auto [k, v] : freq) {
        while (freq[k] > 0) {
            dq.push_front(k);
            dq.push_back(k);
            freq[k] -= 2;
        }
    }

    for (auto ch : dq) {
        cout << ch;
    }
    cout << '\n';

    return 0;
}
