// 22 September, 2025
//
// Im at uni, doing some leetcode
//

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        vector<int> res(temps.size(), 0);
        stack<int> s;
        for (int i = 0; i < temps.size(); i++) {
            while (!s.empty() && temps[s.top()] < temps[i]) {
                res[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        return res;
    }
};

