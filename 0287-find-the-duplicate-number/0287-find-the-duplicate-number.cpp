class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int freq[100001] = {0}, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > 1) {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};