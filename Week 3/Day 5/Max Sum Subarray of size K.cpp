#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    long long maximumSumSubarray(vector<int>& arr, int k) {
        int n = arr.size(), l = 0, r = 0;
        long long res = 0, sum = 0;

        while (r < n) {
            sum += arr[r];
            if (r - l + 1 == k) {
                res = max(res, sum);
                sum -= arr[l];
                l++;
            }
            r++;
        }

        return res;
    }
};