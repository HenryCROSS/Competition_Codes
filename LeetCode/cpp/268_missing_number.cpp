#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();
        
        sort(nums.begin(), nums.end());

        for (int idx = 0; idx < sz; ++idx) {
            if(nums.at(idx) != idx)
                return idx;
        }

        return nums.size();
    }
};
