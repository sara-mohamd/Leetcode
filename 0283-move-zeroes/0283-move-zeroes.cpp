class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                v.push_back(nums[i]);
            else
                count++;
        }
        for (int x = 0; x < count; x++)
            v.push_back(0);
        nums = v;
        //nums.swap(v);
        
    }
};