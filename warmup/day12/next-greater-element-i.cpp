// 23 September, 2025
//
// my brute force solution
//

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);

        // pre find j using hash table
        unordered_map<int, int> m;
        for (int i = 0; i < nums2.size(); i++) m[nums2[i]] = i;

        for (int i = 0; i < nums1.size(); i++) {
            // 1. find j from nums2
            int k = m[nums1[i]];

            // 2. find next greater element
            for (int j = k + 1; j < nums2.size(); j++) {
                if (nums2[k] < nums2[j]) {
                    res[i] = nums2[j];
                    break;
                }
            }
        }
        return res;
    }
};

//
// Solution with monotonic stack
// its magic
//
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size(), -1);

        // pre find num higher than j using hash table and monotonic stack
        unordered_map<int, int> m;
        stack<int> s;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && nums2[i] >= s.top()) {
                s.pop();
            }
            m[nums2[i]] = s.empty() ? -1 : s.top();
            s.push(nums2[i]);
        }

        for (int i = 0; i < nums1.size(); i++) {
            res[i] = m[nums1[i]];
        }
        return res;
    }
};

