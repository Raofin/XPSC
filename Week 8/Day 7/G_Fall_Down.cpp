#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        char grid[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            int last = n - 1;
            for (int j = n - 1; j >= 0; j--) {
                if (grid[j][i] == 'o') {
                    last = j - 1;
                }
                if (grid[j][i] == '*') {
                    swap(grid[j][i], grid[last][i]);
                    last--;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
