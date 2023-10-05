class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int temp = target - nums[i];
            for(int j = i + 1; j < n; j++) {
                if (nums[j] == temp){
                sol.push_back(i);
                sol.push_back(j);
                return sol;
                }
            }
        }
        return sol;
    }
};