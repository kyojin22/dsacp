// 12 September, 2025
//
// I always struggled with this question
// and always looked at solutions
// However, today I cracked it
// I solved on my own :)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int mn = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] - mn > mx) {
                mx = prices[i] - mn;
            }

            mn = prices[i] < mn ? prices[i] : mn;
        }
        return mx;
    }
};

