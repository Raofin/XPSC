#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int c = 0;
    for (int i = a; i <= b; i++) {
        c++;
    }
    cout << c << '\n';

    return 0;
}