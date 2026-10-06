# Maximum Subarray Sum (Kadane's Algorithm)

Fast $O(N)$ C++ solution to compute the contiguous subarray with the largest sum.

## Problem Description
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

### Example
- Input: `nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]`
- Output: `6` (Subarray: `[4, -1, 2, 1]`)

## Approach & Complexity
Kadane's Algorithm maintains a running sum of the best subarray ending at each index $i$:
$$\text{currentSum} = \max(nums[i], \text{currentSum} + nums[i])$$

- **Time Complexity:** $O(N)$
- **Space Complexity:** $O(1)$ auxiliary space.

## How to Run & Test
```bash
g++ -std=c++17 main.cpp -o main
./main
```
