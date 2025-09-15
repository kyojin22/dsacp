// 15 September, 2025
//
// I am in the office, sitting alone, everyone gone
// and me sitting and trying to solve leetcode
// exhausted from university and work.
//
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        int product = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] *= product;
            product *= nums[i];
        }
        product = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= product;
            product *= nums[i];
        }
        return res;
    }
};

