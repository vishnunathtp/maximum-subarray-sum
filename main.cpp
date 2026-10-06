#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int maxSubArray(const std::vector<int>& nums) {
    if (nums.empty()) return 0;
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int res = maxSubArray(nums);
    std::cout << "Max subarray sum: " << res << std::endl;
    assert(res == 6);
    assert(maxSubArray({1}) == 1);
    assert(maxSubArray({5, 4, -1, 7, 8}) == 23);
    assert(maxSubArray({-1, -2, -3}) == -1);
    std::cout << "All assertions passed!" << std::endl;
    return 0;
}
