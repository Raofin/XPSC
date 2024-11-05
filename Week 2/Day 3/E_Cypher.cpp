#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            for (int j = 0; j < a; j++) {
                char ch;
                cin >> ch;
                if (ch == 'D') {
                    arr[i] = (arr[i] == 9) ? 0 : ++arr[i];
                } else if (ch == 'U') {
                    arr[i] = (arr[i] == 0) ? 9 : --arr[i];
                }
            }
            cout << arr[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}