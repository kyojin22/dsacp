// 18 September, 2025
//
// Again, not solving myself but with help
//
// why i am so weak and stupid
// why cant i solve anything
// or do something creative
//
// fck me
//
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> d;
        for (int i = 0; i < nums.size(); i++) {
            if (!d.empty() && d.front() <= i - k) {
                d.pop_front();
            }

            while (!d.empty() && nums[d.back()] <= nums[i]) {
                d.pop_back();
            }

            d.push_back(i);

            if (i >= k - 1) {
                res.push_back(nums[d.front()]);
            }
        }
        return res;
    }
};

