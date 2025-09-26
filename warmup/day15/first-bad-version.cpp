// 26 September, 2025
//
// am i fired?
//


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n;
        while (l < r) {
            int m = ((r - l) / 2) + l;
            if (isBadVersion(m)) {
                r = m;
            } else {
                l = m + 1;
            }
        }
        return r;
    }
};

