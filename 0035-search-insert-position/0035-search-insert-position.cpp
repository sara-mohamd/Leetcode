#define all(x) (x).begin(), (x).end()
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(all(nums), target) - nums.begin();
        return it;
    }
};