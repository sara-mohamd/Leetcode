class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int result = 0;
        int size = nums.size();
        if(size == 1)
            return 0;
        vector<int> pref(size + 1);
        for (int i = 1; i <= size; i++)
            pref[i] = pref[i - 1] + nums[i - 1];
        for (int i = 1; i <= nums.size(); i++)
            if((pref[size] - pref[i]) == pref[i - 1])
                {
                    result = i;
                    break;
                }
        return result > 0? (result - 1) : -1;
    }
};