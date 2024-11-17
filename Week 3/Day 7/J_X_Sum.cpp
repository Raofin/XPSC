#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int grid[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        int res = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = grid[i][j];
                for (auto [dx, dy] : dir) {
                    int x = i + dx;
                    int y = j + dy;
                    while (x >= 0 and y >= 0 and x < n and y < m) {
                        sum += grid[x][y];
                        x += dx;
                        y += dy;
                    }
                }
                res = max(res, sum);
            }
        }
        cout << res << '\n';
    }

    return 0;
}
