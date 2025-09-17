// 17 September, 2025 22:28
//
// i solved this with the help of ai
// part after finding the triplet updating again
//
// uffffffff
// this way i will never improve
// fck me for bein developer
// never had worked
// always had consumed
// what others created
//
//
//
// FUCKkkkkkkkkkkkkkkkkkkkkkkkkkkkk
//
// Shall die
//
// donno why even im keepin this repo
//
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int t = 0; t < nums.size() - 2; t++) {
            if (t > 0 && nums[t] == nums[t - 1]) continue;
            int l = t + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int s = nums[l] + nums[r] + nums[t];
                if (s < 0) l++;
                else if (s > 0) r--;
                else {
                    res.push_back({ nums[t], nums[l], nums[r] });
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;
                    l++;
                    r--;
                }
            }
        }

        return res;
    }
};

