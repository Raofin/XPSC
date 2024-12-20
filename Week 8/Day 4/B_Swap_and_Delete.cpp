#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int one = 0, zero = 0;
        for (char ch : str) {
            ch == '0' ? zero++ : one++;
        }

        for (char ch : str) {
            if (ch == '1') {
                if (zero <= 0) {
                    break;
                }
                zero--;
            } else {
                if (one <= 0) {
                    break;
                }
                one--;
            }
        }

        cout << zero + one << '\n';
    }

    return 0;
}
