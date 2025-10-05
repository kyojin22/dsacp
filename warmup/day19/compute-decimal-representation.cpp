// 30 September, 2025
//
// too tired...
//
// f
//

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> res;
        int l = 0;
        while (n) {
            int r = n % 10;
            n /= 10;
            if (r) {
                res.push_back(r * pow(10, l));
            }
            l++;
        }
        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};

