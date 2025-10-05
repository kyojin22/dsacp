// 25 September, 2025
//
// if midpoint is less than target insertion has to be on the right side
// else insertion has to be on the left side
//
// that is why there is +1 and -1 on left and right pointers
//
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = (r + l) / 2;
            if (nums[m] == target) return m;
            else if (nums[m] < target) l = m + 1;
            else r = m - 1;
        }
        return l;
    }
};

