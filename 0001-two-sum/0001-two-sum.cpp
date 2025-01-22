
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            auto it = find(nums.begin(), nums.end(), target - nums[i]) - nums.begin();
            if(find(nums.begin(), nums.end(), target - nums[i]) != nums.end() && it != i) {
                ans.push_back(i);
                ans.push_back(it);
                break;
            }
            else
                continue;
        }
        return ans;
    }
};