//Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        
        if (n < 3) {
            return nums[n - 1];
        }
        
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                count++;
            }
            if (count == 3) {
                return nums[i];
            }
        }
        
        return nums[n - 1];
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {3, 2, 1};
    std::cout << sol.thirdMax(nums) << std::endl; // Output should be 1
    return 0;
}
