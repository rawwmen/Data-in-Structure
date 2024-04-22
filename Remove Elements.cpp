/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
*/

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
    Solution solution;
    std::vector<int> nums = {3, 2, 1};
    std::cout << solution.thirdMax(nums) << std::endl;

    return 0;
}
