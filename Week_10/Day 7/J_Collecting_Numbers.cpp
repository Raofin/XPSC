#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n + 1];
    map<int, int> pos;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int res = 1;
    int prev = pos[1];
    for (int i = 2; i <= n; i++) {
        int curr = pos[i];
        if (curr < prev) {
            res++;
        }
        prev = curr;
    }

    cout << res << '\n';
    return 0;
}
