// 14 September, 2025

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        unordered_set<char> seen;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            while (seen.count(s[r]) > 0) {
                seen.erase(s[l++]);
            }

            seen.insert(s[r]);
            longest = max(longest, r - l + 1);
        }

        return longest;
    }
};

