// 26 September, 2025
//
// if left side is less than mid
// then [l ... m] is sorted, inside it check if target inside or not
// and update the pointers accordingly
// else [m ... r] is sorted, and do the same checks for this side as well
//
// yea, i like anime girls? and like to put them to my pfps.. alr? so what?
//

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int m = ((r - l) / 2) + l;
            if (nums[m] == target) {
                return m;
            } else if (nums[l] <= nums[m]) {
                // left ... mid is asc
                if (target >= nums[l] && target < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                // mid ... right is asc
                if (target > nums[m] && target <= nums[r]) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }
        return -1;
    }
};

