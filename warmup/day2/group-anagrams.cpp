// 13 September, 2025
//
// sort(v.begin(), v.end()) - learned that sort works for strings as well like ints

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        
        for (string str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            m[sorted].push_back(str);
        }

        vector<vector<string>> res;
        for (auto entry : m) {
            res.push_back(entry.second);
        }
        return res;
    }
};

