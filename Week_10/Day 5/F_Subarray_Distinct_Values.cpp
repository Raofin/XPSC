#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (auto &x : arr) {
        cin >> x;
    }

    map<int, int> freq;
    ll l = 0, r = 0, res = 0;
    for (auto x : arr) {
        freq[x]++;
        while (freq.size() > k) {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0) {
                freq.erase(arr[l]);
            }
            l++;
        }
        res += (r - l + 1);
        r++;
    }

    cout << res << '\n';
    return 0;
}
