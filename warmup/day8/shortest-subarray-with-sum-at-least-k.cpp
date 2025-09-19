// 19 September, 2025
//
// again with help
//

class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        vector<long long> P(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) P[i + 1] = P[i] + nums[i];      
        
        deque<int> d;
        int ans = INT_MAX;
        for (int j = 0; j <= nums.size(); j++) {

            while (!d.empty() && P[j] - P[d.front()] >= k) {
                ans = min(ans, j - d.front());
                d.pop_front();
            }

            while (!d.empty() && P[j] <= P[d.back()]) {
                d.pop_back();
            }

            d.push_back(j);
        }
        return ans == INT_MAX ? -1 : ans;
    }
};

