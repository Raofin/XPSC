#include <bits/stdc++.h>
using namespace std;

int countPlus(int i) {
    int cnt = 0;
    while (i > 0) {
        if (i & 1) cnt++;
        i >>= 1;
    }
    return cnt;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int p1 = 0, p2 = 0, q = 0;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == '+') p1++;
        if (s2[i] == '+') p2++;
        if (s2[i] == '?') q++;
    }

    double cnt = 0;
    for (int i = 0; i < (1 << q); i++) {
        if (p2 + countPlus(i) == p1) {
            cnt++;
        }
    }

    printf("%.12f\n", cnt / (1 << q));
    return 0;
}