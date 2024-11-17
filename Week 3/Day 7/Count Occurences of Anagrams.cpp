#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int search(string pat, string txt) {
        map<char, int> mp;
        for (char ch : pat) {
            mp[ch]++;
        }

        int l = 0, r = 0, cnt = 0;
        int n = txt.size(), k = pat.size();

        while (r < n) {
            mp[txt[r]]--;
            if (r - l + 1 == k) {
                cnt++;
                for (char ch : pat) {
                    if (mp[ch]) {
                        cnt--;
                        break;
                    }
                }
                mp[txt[l]]++;
                l++;
            }
            r++;
        }
        return cnt;
    }
};