#define all(x) (x).begin(), (x).end()
#define sz(x) (x).size()
class Solution {
public:
    /* -- Using built in Binary search function -- */
    // int searchInsert(vector<int>& nums, int target) {
    //     auto it = lower_bound(all(nums), target) - nums.begin();
    //     return it;
    // }

    /* -- build lower_bound function -- */
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = sz(nums) - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return r + 1;
    }
};