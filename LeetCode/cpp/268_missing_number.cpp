#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz = nums.size();

        for (int idx = 1; idx <= sz; ++idx) {
            if(nums.at(idx) != idx)
                return idx;
        }
    }
};
