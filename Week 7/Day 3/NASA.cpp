#define fastio() (ios::sync_with_stdio(false), cin.tie(nullptr))
#include <bits/stdc++.h>
using namespace std;

const int MAX = (1 << 15);
vector<int> p;

bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    for (int i = 0; i <= n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    fastio();

    for (int i = 0; i < MAX; i++) {
        if (isPalindrome(i)) {
            p.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), cnt(MAX, 0);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            cnt[v[i]]++;
        }

        long long ans = n;
        for (int i = 0; i < n; i++) {
            for (int x : p) {
                ans += cnt[v[i] ^ x];
            }
        }
        cout << ans / 2 << '\n';
    }

    return 0;
}
