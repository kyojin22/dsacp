// 15 September, 2025, 22:02
//
// Kadane's algorithm
// I did not come up with the solution
// A bit of research and hint
// and this algorithm is MAGIC
// Its like:
// - Do I extend the current subarray, or start fresh from here?
//
// Formula:
// local_max[i] = max(A[i], A[i] + local_max[i - 1])
//
// Its like is new element bigger so far
// or
// if I take this, will my local_max increase? 
//
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];   
        int currentSum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};

