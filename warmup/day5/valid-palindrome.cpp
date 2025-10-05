// 16 September, 2025 21:16
//
// Came from work an hour ago, tired and hungry
// feeling like hit by car
//
// my iris is red
// dementia is developing
// i keep forgetting many things
// today, at work i used 'this' keyword inside template in vue
// wtf? i was ashamed to see that when my coworker found out
//
// hair loss for more than 1-2 years already
//
// but still thanks for the god
// living far better life than most of the average
//
// 
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            if (!isalnum(s[l])) {
                l++;
                continue;
            }

            if (!isalnum(s[r])) {
                r--;
                continue;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }
        return true;   
    }
};

