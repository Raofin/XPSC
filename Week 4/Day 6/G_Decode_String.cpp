#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string enc, dec;
        cin >> n >> enc;

        for (int i = n - 1; i >= 0; i--) {
            if (enc[i] == '0') {
                int num = (enc[i - 2] - '0') * 10 + (enc[i - 1] - '0');
                dec.push_back((num - 1) + 'a');
                i -= 2;
            } else {
                dec.push_back((enc[i] - '0' - 1) + 'a');
            }
        }

        reverse(dec.begin(), dec.end());
        cout << dec << '\n';
    }

    return 0;
}
