#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt[12][12] = {};
        long long res = 0;
        while (n--) {
            string s;
            cin >> s;
            for (int i = 0; i < 2; i++) {
                char ori = s[i];
                for (char ch = 'a'; ch <= 'k'; ch++) {
                    if (ch != ori) {
                        s[i] = ch;
                        res += cnt[s[0] - 'a'][s[1] - 'a'];
                    }
                }
                s[i] = ori;
            }
            cnt[s[0] - 'a'][s[1] - 'a']++;
        }
        cout << res << '\n';
    }

    return 0;
}
