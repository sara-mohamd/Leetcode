#define sz(x) (x).size()
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = sz(nums) - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if(nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1; 
        }
        return -1;
    }
};