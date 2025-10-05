// 16 September, 2025 21:47
//
// this is n^2 solution
// however, in leetcode solutions, i saw that there is 
// 2 more interesting solutions
// one of them is using DP where time and space complexity is n^2
//
// and second one is Manacher's algorithm which solves in O(n) time complexity
// which i have to look into
//
// im tired, so i will cover them when i have time, energy and will to do
// which will never happen ig
//
class Solution {
public:
    string longestPalindrome(string s) {
        string maxStr = "";
        for (int i = 0; i < s.size(); i++) {
            // odd case
            int l = i;
            int r = i;
            while (l >= 0 && r < s.size() && tolower(s[l]) == tolower(s[r])) {
                if (r - l + 1 > maxStr.size()) {
                    maxStr = s.substr(l, r - l + 1);
                }

                l--;
                r++;
            }

            // even case
            l = i;
            r = i + 1;
            while (l >= 0 && r < s.size() && tolower(s[l]) == tolower(s[r])) {
                if (r - l + 1 > maxStr.size()) {
                    maxStr = s.substr(l, r - l + 1);
                }

                l--;
                r++;
            }
        }
        return maxStr;
    }
};

