class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l = 0, r = nums.size() - 1;
        while(l <= r) {
            if( nums[l] + nums[r] == target)
                return vector<int> {l + 1, r + 1};
            if(nums[l] + nums[r] < target)
                l++;
            else
                r--; 
        }
        return vector<int>();
    }
};