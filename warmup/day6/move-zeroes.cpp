// 17 September, 2025 21:42
//
// yesterday, i wrote my iris were red
// i was wrong, iris was middle black part of the eye
// my eyes were red, okay?
//
// i still have not chosen my bis project
// and for that shit im worryin
// dunno why as always
// 
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] != 0) {
                int t = nums[l];
                nums[l] = nums[r];
                nums[r] = t;
                l++;
            }
        }

        // my solution
        // for some reason, i thought i have to keep in eye on left as well
        // for above solution, i did not understood how its happening
        // maybe i will look more into it again in the future
        // maybe tmrw
        // just lost interest today

        // int l = 0;
        // while (l < nums.size() && nums[l] != 0) {
        //     l++;
        // }

        // for (int r = l + 1; r < nums.size(); r++) {
        //     if (nums[r] != 0 && l < nums.size()) {
        //         nums[l] = nums[r];
        //         nums[r] = 0;
        //         while (nums[l] != 0) {
        //             l++;
        //         }
        //     }
        // }
    }
};
