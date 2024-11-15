#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int n = arr.size(), l = 0, r = 0;
        vector<int> res;
        queue<int> que;

        while (r < n) {
            if (arr[r] < 0) {
                que.push(arr[r]);
            }
            if (r - l + 1 == k) {
                if (!que.empty()) {
                    res.push_back(que.front());
                    if (arr[l] == que.front()) {
                        que.pop();
                    }
                } else {
                    res.push_back(0);
                }
                l++;
            }
            r++;
        }

        return res;
    }
};