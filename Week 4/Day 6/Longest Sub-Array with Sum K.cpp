#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        map<int, int> mp;
        int r = 0, sum = 0, res = 0;

        while (r < arr.size()) {
            sum += arr[r];

            if (sum == k) {
                res = r + 1;
            }

            if (mp.count(sum - k)) {
                res = max(res, r - mp[sum - k]);
            }

            if (!mp.count(sum)) {
                mp[sum] = r;
            }

            r++;
        }

        return res;
    }
};