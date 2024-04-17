// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
#include <vector>
#include <algorithm>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        
        return nums[nums.size() - 1];
    }
};
